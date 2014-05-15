/*************************************************************************
	> File Name: thread3.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 01 Apr 2014 10:24:32 AM CST
 ************************************************************************/

#include<stdio.h>
#include<pthread.h>
pthread_mutex_t mutex;
int count=0;
int flag=0;
void *thd1_handle(void *arg)
{
  while(1)
  {
       pthread_mutex_lock(&mutex);
	   if(count%2==1)
	   {
	       printf("thd1 :%d\n", count);
           pthread_mutex_unlock(&mutex);
	   }
       sleep(1);
  }
  pthread_exit((void*)1);
}
void *thd2_handle(void *arg)
{
  while(1)
  {
       pthread_mutex_lock(&mutex);
	   if(count%2!=1)
	   {
	       printf("thd2 :%d\n", count);
           pthread_mutex_unlock(&mutex);
	   }
       sleep(1);
  }
  pthread_exit((void*)2);
}
int main()
{
    pthread_t thd1, thd2;
	pthread_mutex_init(&mutex, NULL);
    pthread_create(&thd1, NULL, thd1_handle, NULL);
    pthread_create(&thd2, NULL, thd2_handle, NULL);
    while(1)
	{
	    pthread_mutex_lock(&mutex);
	    count++;
        printf("main: %d\n", count);
		pthread_mutex_unlock(&mutex);
		sleep(1);
	}
	//pthread_mutex_unlock(&mutex);
	int status1, status2;
	pthread_join(thd1, (void*)&status1);
	pthread_join(thd2, (void*)&status2);
	printf("thd1 exit: %d, thd2 exit: %d\n", status1, status2);
    return 0;
}
