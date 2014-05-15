/*************************************************************************
	> File Name: p_c.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 31 Mar 2014 08:01:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<pthread.h>
#define BUFFER_SIZE 16
#define OVER  (-1)

struct prodcons
{
  int buffer[BUFFER_SIZE];
  pthread_mutex_t lock;
  int readpos,writepos;
  pthread_cond_t notempty;
  pthread_cond_t notfull;
};
struct prodcons buffer;
void init(struct prodcons *b)
{
  pthread_mutex_init(&b->lock, NULL);
  pthread_cond_init(&b->notempty, NULL);
  pthread_cond_init(&b->notfull, NULL);
  b->readpos=0;
  b->writepos=0;
}
void destroy(struct prodcons *b)
{
  pthread_mutex_destroy(&b->lock);
  pthread_cond_destroy(&b->notempty);
  pthread_cond_destroy(&b->notfull);
}
void put(struct prodcons *b, int data)//producer
{
  pthread_mutex_lock(&b->lock);
  while((b->writepos+1)%BUFFER_SIZE==b->readpos)
  {
    printf("wait for not full\n");
    pthread_cond_wait(&b->notfull, &b->lock);
  }
  b->buffer[b->writepos]=data;
  b->writepos++;
  if(b->writepos>=BUFFER_SIZE) b->writepos=0;
  pthread_cond_signal(&b->notempty);
  pthread_mutex_unlock(&b->lock);
}
int get(struct prodcons *b)//consumer
{
  pthread_mutex_lock(&b->lock);
  while(b->writepos==b->readpos)
  {
    printf("wait for not empty\n");
    pthread_cond_wait(&b->notempty, &b->lock);
  }
  int data=b->buffer[b->readpos];
  b->readpos++;
  if(b->readpos>=BUFFER_SIZE) b->readpos =0;
  pthread_cond_signal(&b->notfull);
  pthread_mutex_unlock(&b->lock);
  return data;
}
void *producer(void *data)
{
  int n=0;
  for(;n<50;n++)
  {
    printf("put->%d\n",n);
	put(&buffer,n);
  }
  put(&buffer, OVER);
  printf("producer stopper!\n");
  pthread_exit(NULL);
}
void *consumer(void *data)
{
  while(1)
  {
    int d=get(&buffer);
	if(d==OVER) break;
    printf("%d ->get\n", d);
  }
  printf("consumer stopped!\n");
  pthread_exit(NULL);
}

int main(void)
{
  pthread_t th_a,th_b;
  init(&buffer);
  pthread_create(&th_a,NULL,producer, NULL);
  pthread_create(&th_b,NULL,consumer, NULL);
  pthread_join(th_a, NULL);
  pthread_join(th_b, NULL);
  destroy(&buffer);
  return 0;
}
