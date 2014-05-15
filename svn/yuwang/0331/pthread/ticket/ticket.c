/*************************************************************************
  > File Name: ticket.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Mon 31 Mar 2014 05:02:39 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include<semaphore.h>
int flag=0;
pthread_mutex_t mutex;
int count=0;
pthread_cond_t cond;
void *window1(void *arg)
{
	while(sleep(2),1)
	{
		pthread_mutex_lock(&mutex);
		if(count>0)
		{
			flag=1;
			count--;
			printf("window1 sold 1,left %d\n",count);
			pthread_mutex_unlock(&mutex);
		}
		else if(count==0&&flag==0)
		{
			pthread_cond_wait(&cond,&mutex);
			pthread_mutex_unlock(&mutex);
		}
		else if(count==0&&flag==1)
		{
			pthread_cond_wait(&cond,&mutex);
			pthread_mutex_unlock(&mutex);
		}
	}
	pthread_exit((void*)1);
}
void *window2(void *arg)
{
	while(sleep(1),1)
	{
		pthread_mutex_lock(&mutex);
		if(count>0)
		{
			flag=1;
			count--;
			printf("window2 sold 1,left %d\n",count);
			pthread_mutex_unlock(&mutex);
		}
		else if(count==0&&flag==0)
		{
			pthread_cond_wait(&cond,&mutex);
			pthread_mutex_unlock(&mutex);
		}
		else if(count==0&&flag==1)
		{
			pthread_cond_wait(&cond,&mutex);
			pthread_mutex_unlock(&mutex);
		}
	}
	pthread_exit((void*)2);
}
int main()
{
	pthread_t a_thread,b_thread;
	pthread_mutex_init(&mutex,NULL);
	pthread_cond_init(&cond,NULL);
	pthread_create(&a_thread,NULL,window1,NULL);
	pthread_create(&b_thread,NULL,window2,NULL);
	while(1)
	{
		pthread_mutex_lock(&mutex);
		if(flag==0&&count==0)
		{
			count =20;
		}else if(flag==1&&count==0)
		{
			printf("extra ticket !!\n");
			count=10;
		}
		pthread_mutex_unlock(&mutex);
		pthread_cond_signal(&cond);
	}	  
	int status1, status2;
	pthread_join(a_thread,(void*)&status1);
	pthread_join(b_thread,(void*)&status2);
	printf("%d %d\n",status1, status2);
	pthread_mutex_destroy(&mutex);
	pthread_cond_destroy(&cond);
	exit(EXIT_SUCCESS);
}
