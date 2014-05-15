/*************************************************************************
	> File Name: thread1.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sat 29 Mar 2014 09:18:27 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>

void *thread_function(void *arg);
char message[128]="";
int main(int argc, char *argv[])
{
   int res,iret;
   pthread_t a_thread;
   void *thread_result;
   memset(message, 0, 128);
   iret=read(0, message, 128);
   puts(message);
   res=pthread_create(&a_thread, NULL,thread_function,(void*)message);
   if(res !=0)
   {
      perror("Thread creation failed");
      exit(EXIT_FAILURE);
   }
   printf("waiting for thread to finish...\n");
   res =pthread_join(a_thread, &thread_result);
   if(res!=0)
   {
      perror("Thread join failed");
      exit(EXIT_FAILURE);
   }
   printf("Thread joined, it returned %s\n",(char*)thread_result);
   printf("Message is now %s\n", message);
   exit(EXIT_SUCCESS);
}

void *thread_function(void *arg)
{
  printf("thread_function is running,Argument was %s\n",(char *)arg);
  sleep(3);
  int i;
  for(i=0;i<strlen(message);i++)
  {
    if(message[i]>='A'&&message[i]<='Z')  message[i]=message[i]+32;
  }
  pthread_exit("hey guys, your turn, thank you");
}
