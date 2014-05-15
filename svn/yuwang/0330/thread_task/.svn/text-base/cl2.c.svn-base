/*************************************************************************
	> File Name: cl2.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 30 Mar 2024 07:02:07 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
int main()
{
   int fd_2w,fd_2r;
   fd_2w=open("2w.fifo",O_WRONLY);
   fd_2r=open("2r.fifo",O_RDONLY);
   printf("%d %d\n", fd_2w, fd_2r);
   char buf[128];
   while(1)
   {
      int iret=read(0, buf, 128);
	  buf[iret]='\0';
	  write(fd_2w, buf, strlen(buf));
	  iret=read(fd_2r, buf, strlen(buf));
      buf[iret]='\0';
	  write(1, buf, strlen(buf));
   }
}
