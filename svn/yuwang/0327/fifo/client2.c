/*************************************************************************
  > File Name: client1.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Fri 28 Mar 2014 12:45:22 PM CST
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
	char buf[32];
	int fd1,fd2;
	pid_t pid;
	pid=fork();
	int iret=0;
  if(-1==(fd1=open(argv[1],O_WRONLY)))
  {
    perror("open");
	exit(-1);
  }
  if(-1==(fd2=open(argv[2],O_RDONLY)))
  {
    perror("open");
	exit(-1);
  
  }
   if(pid>0)
   {
      while(fgets(buf, 32, stdin))
	  {  
		write(fd1, buf, strlen(buf));
		memset(buf ,0,32);
	  }
   }
	if(pid==0)
	{
     	while((iret=read(fd2,buf,32)) > 0)
		{
		buf[iret]='\0';
		write(1,buf,iret);
		memset(buf, 0, 32);
	    }
	}
	return 0;
}
