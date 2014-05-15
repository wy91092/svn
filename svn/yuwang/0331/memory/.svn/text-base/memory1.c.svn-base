/*************************************************************************
	> File Name: memory1.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 31 Mar 2014 09:57:50 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define A_MEGABYTE  (1024*1024)

int main()
{
    char  *some_memory;
	int megabyte =A_MEGABYTE;
	int exit_code=EXIT_FAILURE;

	some_memory=(char *)malloc(megabyte);
	if(some_memory!=NULL)
	{
	  sprintf(some_memory, "Hello world\n");
	  printf("%s", some_memory);
	  exit_code=EXIT_SUCCESS;
	}
    exit(exit_code);
}
