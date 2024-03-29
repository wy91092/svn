/*************************************************************************
	> File Name: fork1.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 26 Mar 2014 01:02:39 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
    pid_t pid;
	char *message;
	int n;

	printf("fork program starting\n");
	pid=fork();
	switch(pid)
	{
	  case -1:
		  perror("fork failed");
		  exit(1);
	  case 0:
		  message="This is the child";
		  n=5;
		  break;
	  default:
		  message="This is the parent";
		  n=3;
		  break;
	}

	for(;n>0;n--)
	{
	   puts(message);
	   sleep(1);
	}

    exit(0);
}
