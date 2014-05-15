/*************************************************************************
  > File Name: server.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Thu 03 Apr 2014 09:21:27 AM CST
 ************************************************************************/

#include"chat.h"


int main(int argc, char *argv[])
{
	struct sockaddr_in client_addr,server_addr,online[10];
	int server_fd;
	int iret;
	char recv_buf[128]="", send_buf[128]="";
	//socket
	server_fd=socket(AF_INET, SOCK_DGRAM, 0);
	if(server_fd==-1)
	{
		perror("socket\n");
		exit(-1);
	}

	//bind
	memset(&server_addr, 0, sizeof(server_addr));
	server_addr.sin_family=AF_INET;
	server_addr.sin_port=htons(atoi(argv[2]));
	server_addr.sin_addr.s_addr=inet_addr(argv[1]);
	iret=bind(server_fd,(const struct sockaddr*)&server_addr,sizeof(server_addr));
	if(iret==-1)
	{
		perror("bind\n");
		close(server_fd);
		exit(-1);
	}

	fd_set fd_rd, fd_back;
	FD_ZERO(&fd_rd);
	FD_SET(server_fd ,&fd_rd);
	struct timeval tm;

	//recvfrom
	while(1)
	{	
		tm.tv_sec=1;
		tm.tv_usec=0;
		fd_back=fd_rd;
		select(1024 , &fd_back, NULL,NULL, &tm);
		if(FD_ISSET(server_fd,&fd_back))
		{
			int index=0,i=0;
			memset(&client_addr, 0, sizeof(client_addr));
			memset(recv_buf, 0 ,128);
			int len=sizeof(client_addr);
			recvfrom(server_fd,recv_buf, sizeof(recv_buf), 0, (struct scokaddr*)&client_addr , &len);
			if(strncmp(recv_buf,"on",2)==0)
			{
				online[index]=client_addr;
				printf("ip:%s is online!\n",inet_ntoa(online[index].sin_addr));
				index++; 
			}
			else if(strncmp(recv_buf,"off", 3)==0)
			{   
				printf("ip:%s is offline!\n",inet_ntoa(client_addr.sin_addr));
				for(index=0;index<10;index++)
				{
					if(online[index].sin_addr.s_addr==client_addr.sin_addr.s_addr)
					{
						for(i =index+1;i<10;i++)
						{
							online[i-1]=online[i];
						}  
					}
				}
			}
			else
			{
				for(index=0;index<10;index++)
				{  memset(send_buf,0,128);
					sprintf(send_buf,"from:%s \n %s\n",inet_ntoa(online[index].sin_addr),recv_buf);
					sendto( server_fd,send_buf,strlen(send_buf),0,(struct sockaddr*)&online[index],sizeof(online[index]));
				}  
			}
			/*	char ip[32]="";
				printf("receive from ip:%s,port:%d,message:%s\n",inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port), recv_buf);
				*/
		}
	}


	close(server_fd);
	return 0;
}
