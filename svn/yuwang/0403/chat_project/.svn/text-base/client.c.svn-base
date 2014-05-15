/*************************************************************************
  > File Name: client.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Thu 03 Apr 2014 11:15:44 AM CST
 ************************************************************************/

#include"chat.h"
/*void * thd_receive(void *arg)
{
	while(1)
	{  
		memset(recv_buf, 0 ,128);
		int len=sizeof(server_addr);
		recvfrom(client_fd,recv_buf,128,0,(struct sockaddr*)&server_addr,&len);
		char ip[32]="";
		printf("receive from ip:%s,port:%d,message:%s\n",inet_ntoa(server_addr.sin_addr),ntohs(server_addr.sin_port),recv_buf);
	}
	pthread_exit(NULL);
}*/
int main(int argc, char *argv[])
{
	int client_fd,iret;
	char recv_buf[128], send_buf[128];
	struct sockaddr_in server_addr, client_addr;
//	pthread_t a_thd;
	//socket
	client_fd=socket(AF_INET,SOCK_DGRAM, 0);
	if(client_fd==-1)
	{
		perror("socket\n");
		exit(-1);
	}
	memset(&server_addr, 0, sizeof(server_addr));
	server_addr.sin_family=AF_INET;
	server_addr.sin_port=htons(atoi(argv[2]));
	server_addr.sin_addr.s_addr=inet_addr(argv[1]);

//	pthread_create(&a_thd, NULL, thd_receive,&server_addr);
	//sendto
	sendto(client_fd,"on",2,0,(struct sockaddr*)&server_addr,sizeof(server_addr));
	
	fd_set fd_rd,fd_back;
	struct timeval tm;
	FD_ZERO(&fd_rd);
	FD_SET(0, &fd_rd);
	FD_SET(client_fd,&fd_rd);
	while(1)
	{
		fd_back=fd_rd;
		tm.tv_sec=1;
		tm.tv_usec=0;
		select(1024, &fd_back, NULL, NULL, &tm);
		if(FD_ISSET(0,&fd_back))
		{
		    memset(send_buf,0,128);
		    iret=read(0,send_buf,128);
		    if(iret<=0)
			{
	        	sendto(client_fd,"off",3,0,(struct sockaddr*)&server_addr,sizeof(server_addr));
			    break; 
			}
			send_buf[iret]='\0';
		    sendto(client_fd,send_buf,strlen(send_buf),0,(struct sockaddr*)&server_addr,sizeof(server_addr));
		}
		else if(FD_ISSET(client_fd, &fd_back))
		{
			memset(recv_buf, 0, 128);
			iret=recvfrom(client_fd, recv_buf,1024,0,NULL,NULL);
			recv_buf[iret]='\0';
			write(1,recv_buf,strlen(recv_buf));
//			break;
		}
	}

//	pthread_join(a_thd,NULL);
	close(client_fd);
	return 0;
}
