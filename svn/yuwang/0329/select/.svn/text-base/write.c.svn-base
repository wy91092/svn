/*************************************************************************
	> File Name: write.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sat 29 Mar 2014 02:38:16 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc, char *argv[])
{
   int fd,iret;
   fd =open(argv[1], O_WRONLY);
   char buf[128]="";
   while(1)
   {
   memset(buf ,0, 128);
   iret=read(0,buf,128);
   buf[iret]='\0';
   write(fd, buf, strlen(buf));
   }
   close(fd);
    return 0;
}
