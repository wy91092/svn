/*************************************************************************
	> File Name: thread2.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 31 Mar 2014 03:02:16 PM CST
 ************************************************************************/

#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<semaphore.h>
int count=0;
sem_t bin_sem;
void *solution1(void *arg)
{
	if(count%2!=0)
	{
	   sem_wait(&bin_sem);
	   while(count<=10)
	   {
	     printf("thd1: %d\n", count);
		 sleep(2);
		 if(count%2==0)  break;
		 sem_wait(&bin_sem);
	   }
	}
	pthread_exit(NULL);
}
void *solution2(void *arg)
{
	if(count%2==0)
	{
	   sem_wait(&bin_sem);
	   while(count<=10)
	   {
	     printf("thd2: %d\n", count);
		 sleep(1);
		 if(count%2!=0) break;
		 sem_wait(&bin_sem);
	   }
	}
	pthread_exit(NULL);

}
int main()
{
    int res;
	pthread_t a_thread,b_thread;
    res=sem_init(&bin_sem,0,0);
	if(res!=0)
	{
	   perror("failed 1");
	   exit(EXIT_FAILURE);
	}
    res=pthread_create(&a_thread, NULL, solution1, NULL);
	if(res!=0)
	{
	   perror("failed 2");
	   exit(EXIT_FAILURE);
	}
    res=pthread_create(&b_thread, NULL, solution2, NULL);
	if(res!=0)
	{
	   perror("failed 3");
	   exit(EXIT_FAILURE);
	}
    while(count<10)
	{
	  count++;
	  printf("main: %d\n", count);
	  sem_post(&bin_sem);
	  sleep(2);
	}
	pthread_join(a_thread,NULL);
	pthread_join(b_thread,NULL);
    sem_destroy(&bin_sem);
	exit(EXIT_SUCCESS);
}
