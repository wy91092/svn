/*************************************************************************
  > File Name: thread1.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Mon 31 Mar 2014 10:20:55 AM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include<semaphore.h>
int ticket=10;
pthread_mutex_t work_mutex;
void *window1(void *arg)
{   
	while(1)
	{
       pthread_mutex_lock(&work_mutex);
       if(ticket>0)
       {
		--ticket;
		printf("window1 sold 1, left: %d\n", ticket);
	    pthread_mutex_unlock(&work_mutex);
		sleep(2);
    	}
	    if(ticket==0)  break;
	}
	pthread_exit(NULL);

}
void *window2(void *arg)
{
    while(1)
	{
	pthread_mutex_lock(&work_mutex);
       if(ticket>0)
       {
		--ticket;
		printf("window2 sold 1, left: %d\n", ticket);
	    pthread_mutex_unlock(&work_mutex);
		sleep(1);
    	}
	    if(ticket==0)  break;
     }	
     pthread_exit(NULL);

}
int main()
{
	int res;
	pthread_t a_thread,b_thread;
	pthread_mutex_init(&work_mutex, NULL);
	res=pthread_create(&a_thread, NULL, window1, NULL);
	if(res!=0)
	{
		perror("Thread1 creation failed");
		exit(EXIT_FAILURE);
	}
	res=pthread_create(&b_thread, NULL, window2, NULL);
	if(res!=0)
	{
		perror("Thread2 creation failed");
		exit(EXIT_FAILURE);
	}

	pthread_join(a_thread, NULL);
	pthread_join(b_thread, NULL);
	if(ticket==0)
	{
		printf("sold out,thank you\n");
	}
	pthread_mutex_destroy(&work_mutex);
	exit(EXIT_SUCCESS);
}
