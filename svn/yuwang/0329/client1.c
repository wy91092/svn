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
	char buf[128];
	int fd_wr,fd_rd;
	pid_t pid;
	int iret=0;
	fd_wr=open(argv[1], O_WRONLY);
	fd_rd=open(argv[2], O_RDONLY);
	printf("OK!\n");
	if(fd_wr==-1||fd_rd==-1)
	{
	    perror("wo ca!");
	    exit(-1);
	}
	pid=fork();
	if(pid>0)
	{  
        printf("parent!\n");
		close(fd_rd);
		while(1)
		{  
			memset(buf ,0,128);
			iret=read(0, buf, 128);
			if(iret<=0)
			{
			   char *p="bye";
			   write(fd_wr, p, strlen(p));
			   break;
			}
			buf[iret]='\0';
			write(fd_wr, buf, strlen(buf));
		}
		char cmd[128]="";
		sprintf(cmd, "kill -9 %d",getpid);
		system(cmd);
		close(fd_wr);
	}
	else if(pid==0)
	{
		printf("child! \n");
		close(fd_wr);
		while(1)
		{
			memset(buf,0, 128);
			iret=read(fd_rd, buf, 128);
			buf[iret]='\0';
			char recv_buf[128]="";
			sprintf(recv_buf, "from client2:%s\n",buf);
			write(1, recv_buf, strlen(recv_buf));
			if(strncmp(buf,"bye",3)==0)
			{
			    char  cmd[128]="";
				sprintf(cmd,"kill -9 %d",getppid() );
				system(cmd);
				break; 
			}
		   
		}
		close(fd_rd);
	    exit(0);
	}
	
}
