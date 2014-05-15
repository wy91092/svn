/*************************************************************************
  > File Name: tcp.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Fri 04 Apr 2014 09:35:08 AM CST
 ************************************************************************/

#include"tcp.h"
int main(int argc, char *argv[])
{
	int iret;
	//socket
	int fd_server;
	fd_server=socket(AF_INET, SOCK_STREAM,0);
	if(fd_server==-1)
	{
		perror("socket");
		exit(-1);
	}

	//bind
	struct sockaddr_in server_addr;
	memset(&server_addr, 0, sizeof(struct sockaddr));
	server_addr.sin_family=AF_INET;
	server_addr.sin_port=htons(atoi(argv[2]));
	server_addr.sin_addr.s_addr=inet_addr(argv[1]);
	iret=bind(fd_server, (struct sockaddr*)&server_addr,sizeof(server_addr));
	if(iret==-1)
	{
		perror("bind");
		close(fd_server);
		exit(-1);
	}

	//listen
	iret=listen(fd_server, 5);
	if(iret==-1)
	{
		perror("listen");
		exit(-1);
	}

	//accept
	int fd_client;
	struct sockaddr_in client_addr;
	memset(&client_addr, 0, sizeof(client_addr));
	int len=sizeof(client_addr);
	fd_client=accept(fd_server, (struct sockaddr*)&client_addr,&len);
	if(fd_client==-1)
	{
		perror("accept");
		close(fd_server);
		exit(-1);
	}
	printf("ip:%s , %d success connect\n",inet_ntoa(client_addr.sin_addr),ntohs(client_addr.sin_port));

	//recv
	while(1)
	{
		char buf[128]="";
		memset(buf, 0 ,128);
		iret=recv(fd_client, buf,128,0);
		buf[iret]='\0';
		write(1, buf, strlen(buf));

		//send
		memset(buf, 0, 128);
		strcpy(buf,"I see you!\n");
		iret=send(fd_client, buf,strlen(buf),0);
		if(iret==-1)
		{
			perror("send");
			exit(-1);
		}
	}
	//close
	close(fd_client);
	close(fd_server);
	return 0;
}
