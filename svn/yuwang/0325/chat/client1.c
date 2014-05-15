/*************************************************************************
	> File Name: client1.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 25 Mar 2014 09:01:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc, char *argv[])
{
    int fd=open(argv[1], O_WRONLY|O_TRUNC);
	dup2(fd,1);
	close(fd);
	char buf[128]="";
	char send_buf[128]="";
	while(1)
	{
	   int iret=read(0, buf, 128);
	   buf[iret]='\0';
	   sprintf(send_buf, "client:%s\n",buf);
	   write(1, send_buf, strlen(send_buf));
	}

   close(1);
}
