/*************************************************************************
	> File Name: read.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sat 29 Mar 2014 02:19:14 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
int main(int argc, char *argv[])
{
    int fd=open(argv[1],O_RDONLY);
    if(fd ==-1)
	{
	   perror("wo ca");
	   exit(-1);
	}
    char buf[128];
    int iret;
	memset(buf, 0, 128);
	iret=read(0, buf, 128);
	buf[iret]='\0';
	write(1, buf, strlen(buf));
	memset(buf, 0, 128);
	iret=read(fd, buf, 128);
	buf[iret]='\0';
	write(1, buf, strlen(buf));
	return 0;
}
