/*************************************************************************
  > File Name: 1.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Tue 25 Mar 2014 03:33:16 PM CST
 ************************************************************************/
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
int main(int argc, char *argv[])
{
   int fd=open("a.txt",O_RDWR);
 //  close(1);
   int fd_new=dup(fd);
   char buf[20]="";
 //  write(fd_new, buf, strlen(buf));
   read(fd_new, buf, 20);
   puts(buf);
   return 0;
}
