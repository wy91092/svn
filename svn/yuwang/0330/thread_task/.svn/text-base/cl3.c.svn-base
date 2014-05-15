/*************************************************************************
	> File Name: cl1.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 30 Mar 2014 07:02:07 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
int main()
{
   int fd_3w,fd_3r;
   fd_3w=open("3w.fifo",O_WRONLY);
   fd_3r=open("3r.fifo",O_RDONLY);
   printf("%d %d\n", fd_3w, fd_3r);
   char buf[128];
   while(1)
   {
      int iret=read(0, buf, 128);
	  buf[iret]='\0';
	  write(fd_3w, buf, strlen(buf));
	  iret=read(fd_3r, buf, strlen(buf));
      buf[iret]='\0';
	  write(1, buf, strlen(buf));
   }
}
