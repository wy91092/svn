/*************************************************************************
	> File Name: read_select.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sat 29 Mar 2014 02:25:31 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/time.h>
int main(int argc, char *argv[])
{
   int fd;
   fd_set fd_rd, fd_rd_back;
   struct timeval tm;
   fd=open(argv[1], O_RDONLY);
   FD_ZERO(&fd_rd);
   FD_SET(0, &fd_rd);
   FD_SET(fd, &fd_rd);
   tm.tv_sec=10;
   tm.tv_usec=0;
   while(1)
   {
       fd_rd_back=fd_rd;
	   select(1024, &fd_rd_back, NULL, NULL,&tm);
	   printf("select \n");
	   sleep(5);
       if(FD_ISSET(0, &fd_rd_back))
	   {
	       char buf[128]="";
		   int iret=read(0, buf, 128);
		   buf[iret]='\0';
		   write(1, buf, strlen(buf));
	   }else if(FD_ISSET(fd, &fd_rd_back))
	   {
	       char buf[128]="";
	       int iret=read(fd, buf, 128);
	       buf[iret]='\0';
		   write(1, buf, strlen(buf));
	   }
   }
   return 0;
}
