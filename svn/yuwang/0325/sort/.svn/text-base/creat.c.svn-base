/*************************************************************************
	> File Name: creat.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 25 Mar 2014 11:28:57 AM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100000
int main(int argc, char *argv[])
{
   int *arr=(int *)malloc(sizeof(int)*MAX);
   memset(arr, 0, sizeof(int)*MAX);
   char file_name[32];
   int index=1,fd,i;
   srand(time(NULL));
   for(;index<=10; index++)
   {
      memset(file_name, 0, 32);
      sprintf(file_name, "file_%d.dat", index);
	  fd=open(file_name, O_WRONLY|O_CREAT,0666);
	  if(fd==-1)
	  {
	     printf("open\n");
		 exit(-1);
	  }
      for(i=0;i<MAX;i++)
	  {
	    arr[i]=rand()%MAX;
	  }
	  write(fd, arr, sizeof(int)*MAX);
	  close(fd);
   }
  return 0;

}
