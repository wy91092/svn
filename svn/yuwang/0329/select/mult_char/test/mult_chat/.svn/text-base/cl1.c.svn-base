/*************************************************************************
	> File Name: cl1.c
	> Author: Comst
	> Mail:750145240@qq.com 
	> Created Time: Sat 29 Mar 2014 03:49:36 PM CST
 ************************************************************************/

#include "chat.h"
int main()
{
	int fd_12,fd_13,fd_21, fd_31;
	fd_12 = open("cl1_cl2.fifo",O_WRONLY);
	fd_13 = open("cl1_cl3.fifo",O_WRONLY);
	fd_31 = open("cl3_cl1.fifo",O_RDONLY);
	fd_21 = open("cl2_cl1.fifo",O_RDONLY);
	printf("%d %d %d %d\n",fd_12,fd_13,fd_21,fd_31);
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
			write(fd_12, "bye", 3);
			write(fd_13, "bye", 3 );
			char cmd[128]="";
			sprintf(cmd,"kill -9 %d", pid);
			system(cmd);
			break ;
			}
			buf[iret] = '\0';
			write(fd_12, buf, strlen(buf));
			write(fd_13, buf, strlen(buf));
			
		}
		close(fd_12);
		close(fd_13);
		close(fd_21);
		close(fd_31);
	}else if(pid == 0)
	{
		fd_set fd_rd, fd_back ;
		FD_ZERO(&fd_rd);
		FD_SET(fd_21, &fd_rd);
		FD_SET(fd_31, &fd_rd);
		struct timeval tm ;
		tm.tv_sec = 1 ;
		tm.tv_usec = 0 ;
		while(1)
		{
			fd_back = fd_rd ;
			select(fd_21 > fd_31 ? fd_21 + 1: fd_31 + 1 , &fd_back,NULL,NULL,&tm);
			if(FD_ISSET(fd_21, &fd_back))
			{
				memset(buf, 0, 128);
				iret = read(fd_21, buf, 128);
				buf[iret] = '\0';
				char form[128]="";
				sprintf(form, "from client2 : %s", buf);
				write(1, form, strlen(form));
				if(strncmp(buf,  "bye", 3) == 0)
				{
				char cmd[128]="";
				sprintf(cmd, "kill -9 %d", getppid());
				system(cmd);
				close(fd_12);
				close(fd_13);
				close(fd_21);
				close(fd_31);
				break ;
				}
			}
			if(FD_ISSET(fd_31, &fd_back))
			{
				memset(buf, 0, 128);
				iret = read(fd_31, buf, 128);
				buf[iret] = '\0';
				char form[128]="";
				sprintf(form, "from client3 : %s", buf);
				write(1, form, strlen(form));
				if(strncmp(buf,  "bye", 3) == 0)
				{
				char cmd[128]="";
				sprintf(cmd, "kill -9 %d", getppid());
				system(cmd);
				close(fd_12);
				close(fd_13);
				close(fd_21);
				close(fd_31);
				break ;
				}
			}
		}
	}
return 0 ;
}
