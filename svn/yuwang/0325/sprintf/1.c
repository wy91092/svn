/*************************************************************************
	> File Name: 1.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 25 Mar 2014 02:54:16 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc, char *argv[])
{
     char file_name[]="a.out";
	 int fd=open(file_name, O_WRONLY);
	 int index=1,j=0;
	 int b[10];
	 char format[120];
	 if(fd==-1)
	 {
	   printf("Defeat!!!\n");
	   exit(-1);
	 }
	 srand(time(NULL));
	 for(;index<=10000; index++)
	 {
	     for(j=0;j<10;j++)
		 {
		    b[j]=rand()%100000;
		 }
	 
     sprintf(format,"%d %d %d %d %d %d %d %d %d %d \n",b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8],b[9]);
	  write(fd , format, strlen(format));
	 }
	  close(fd);
     return 0;
}
