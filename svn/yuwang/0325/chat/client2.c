/*************************************************************************
	> File Name: client2.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 25 Mar 2014 09:08:40 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc, char *argv[])
{
    int fd=open(argv[1],O_RDONLY);
	if(fd==-1)
	{
	  perror("Defeat\n");
	  exit(-1);
	}
    dup2(fd,0);
	close(fd);
	char recv_buf[128]="";
	char client[128]="";
	while(1)
	{
	   int iret=read(0, recv_buf, 128);
	   recv_buf[iret]='\0';
	   sscanf(recv_buf, "%s", client);
	   if(strncmp("client", client,6)==0)
	   {
	      write(1, recv_buf, strlen(recv_buf));
	   }
	}
   close(0);
   return 0;
}
