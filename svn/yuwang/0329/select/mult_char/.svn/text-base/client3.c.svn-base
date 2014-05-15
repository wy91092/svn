/*************************************************************************
  > File Name: client1.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Sat 29 Mar 2014 05:00:41 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/select.h>
int main(int argc, char *argv[])
{
	int fd_13=open("cl1_cl3",O_RDONLY);
	int fd_23=open("cl2_cl3",O_RDONLY);
	int fd_31=open("cl3_cl1",O_WRONLY);
	int fd_32=open("cl3_cl2",O_WRONLY);
	if(fd_32==-1)
	{
		perror("fd_32");
		exit(-1);
	}
	if(fd_13==-1)
	{
		perror("fd_13");
		exit(-1);
	}
	if(fd_23==-1)
	{
		perror("fd_23");
		exit(-1);
	}
	if(fd_31==-1)
	{
		perror("fd_31");
		exit(-1);
	}
   // printf("%d %d %d %d\n",fd_32,fd_13,fd_23,fd_31);
	int pid;
	pid =fork();
	if(pid>0)
	{
		while(1)
		{
			char buf[128]="";
			memset(buf, 0, 128);
			int iret=read(0, buf, 128);
			if(iret<=0)
			{
				write(fd_31, "bye", 3);
				write(fd_32, "bye", 3);
				char cmd[32]="";
				sprintf(cmd, "kill -9 %d", pid);
				system(cmd);
				break;
			}
			buf[iret]='\0';
			write(fd_31, buf, strlen(buf));
			write(fd_32, buf, strlen(buf));
		}
		close(fd_32);
		close(fd_13);
		close(fd_23);
		close(fd_31);
	}
	else if(pid==0)
	{
		fd_set fd_rd,fd_rd_back;
		struct timeval tm;
		FD_ZERO(&fd_rd);
		FD_SET(fd_23, &fd_rd);
		FD_SET(fd_13, &fd_rd);
		tm.tv_sec=1;
		tm.tv_usec=0;
     	while(1)
		{
	    	fd_rd_back=fd_rd;
	  		 select(fd_23>fd_13 ? fd_23+1 : fd_13+1,&fd_rd_back,NULL,NULL,&tm);
		     if(FD_ISSET(fd_13, &fd_rd_back))
			 {	char buf[128]="";  
				char recv_buf[128]="";
				memset(buf, 0, 128);
				memset(recv_buf, 0, 128);
				int iret=read(fd_13,buf,128 );
				buf[iret]='\0';
				sprintf(recv_buf,"from client1 : %s", buf);
				write(1, recv_buf, strlen(recv_buf));
				if(strncmp(buf,"bye",3)==0)
				{
					char cmd[32]=""; 
					memset(cmd ,0, 32);
					sprintf(cmd, "kill -9 %d", getppid());
					system(cmd);
			        close(fd_32);
			        close(fd_13);
			        close(fd_23);
			        close(fd_31);
			 		break;
                 }
	      	}
	     	else  if(FD_ISSET(fd_23, &fd_rd_back))
	     	{
				char buf[128]="";
				char recv_buf[128]="";
				memset(buf, 0, 128);
				memset(recv_buf, 0, 128);
			    int	iret=read(fd_23,buf,128 );
				buf[iret]='\0';
				sprintf(recv_buf,"from client2 : %s", buf);
				write(1, recv_buf, strlen(recv_buf));
				if(strncmp(buf,"bye",3)==0)
				{
					char cmd[32]=""; 
					memset(cmd ,0, 32);
					sprintf(cmd, "kill -9 %d", getppid());
					system(cmd);
                    close(fd_32);
			        close(fd_13);
			        close(fd_23);
			        close(fd_31);
			 		break; 
				}
			}
		}
	}
	return 0;
}
