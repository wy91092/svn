/*************************************************************************
	> File Name: sort.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 25 Mar 2014 06:31:12 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#define MAX 100000
int main(int argc, char *argv)
{   int iret,i=0;
    int *arr=(int *)malloc(sizeof(int)*MAX);
	memset(arr, 0, sizeof(int)*MAX);
	char file_name[32];
	int fd;
	int index=1;
	for(;index<=10;index++)
	{
	  memset(file_name,0,32);
	  sprintf(file_name, "file_%d.dat",index);
	  fd=open(file_name,O_RDONLY);
	  if(fd==-1)
	  {
	       perror("open");
		   exit(-1);
	  }
	  iret=0;
	  memset(arr,0,sizeof(int)*MAX);
	  iret=read(fd, arr, sizeof(int)*MAX);
	  quick_sort(arr,MAX);
	  if(iret<0)
	  {
	     puts(strerror(errno));
	     perror("read");
         exit(-1);
	  }
	  for(i=0;i<MAX;i++)
	  {
	     printf("%d\n",arr[i]);
	  }
	  close(fd);
	}
    return 0;	
}
