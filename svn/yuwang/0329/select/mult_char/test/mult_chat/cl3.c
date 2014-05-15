/*************************************************************************
	> File Name: cl3.c
	> Author: Comst
	> Mail:750145240@qq.com 
	> Created Time: Sat 29 Mar 2014 03:49:43 PM CST
 ************************************************************************/


#include "chat.h"
int main()
{
	int fd_13,fd_23,fd_32, fd_31;
	fd_13 = open("cl1_cl3.fifo",O_RDONLY);
	fd_23 = open("cl2_cl3.fifo",O_RDONLY);
	fd_31 = open("cl3_cl1.fifo",O_WRONLY);
	fd_32 = open("cl3_cl2.fifo",O_WRONLY);
	printf("%d %d %d %d\n",fd_13,fd_23,fd_31,fd_32);
	char buf[128];
	int iret ;
	int pid ;
	pid = fork();
	if(pid > 0)
	{
		while(1)
		{
			memset(buf, 0 , 128);
			iret = read(0, buf, 128);
			if(iret <= 0)
			{
			write(fd_31, "bye", 3);
			write(fd_32, "bye", 3 );
			char cmd[128]="";
			sprintf(cmd,"kill -9 %d", pid);
			system(cmd);
			break ;
			}
			buf[iret] = '\0';
			write(fd_31, buf, strlen(buf));
			write(fd_32, buf, strlen(buf));
			
		}
		close(fd_13);
		close(fd_23);
		close(fd_31);
		close(fd_32);
	}else if(pid == 0)
	{
		fd_set fd_rd, fd_back ;
		FD_ZERO(&fd_rd);
		FD_SET(fd_13, &fd_rd);
		FD_SET(fd_23, &fd_rd);
		struct timeval tm ;
		tm.tv_sec = 1 ;
		tm.tv_usec = 0 ;
		while(1)
		{
			fd_back = fd_rd ;
			select(fd_13 > fd_23 ? fd_13 + 1: fd_23 + 1 , &fd_back,NULL,NULL,&tm);
			if(FD_ISSET(fd_13, &fd_back))
			{
				memset(buf, 0 , 128);
				iret = read(fd_13, buf, 128);
				buf[iret] = '\0';
				char form[128]="";
				sprintf(form, "from client1 : %s", buf);
				write(1, form, strlen(form));
				if(strncmp(buf,  "bye", 3) == 0)
				{
				char cmd[128]="";
				sprintf(cmd, "kill -9 %d", getppid());
				system(cmd);
				close(fd_13);
				close(fd_23);
				close(fd_31);
				close(fd_32);
				break ;
				}
			}
			if(FD_ISSET(fd_23, &fd_back))
			{
				memset(buf, 0 , 128);
				iret = read(fd_23, buf, 128);
				buf[iret] = '\0';
				char form[128]="";
				sprintf(form, "from client2 : %s", buf);
				write(1, form, strlen(form));
				if(strncmp(buf,  "bye", 3) == 0)
				{
				char cmd[128]="";
				sprintf(cmd, "kill -9 %d", getppid());
				system(cmd);
				close(fd_13);
				close(fd_23);
				close(fd_31);
				close(fd_32);
				break ;
				}
			}
		}
	}
return 0 ;
}
