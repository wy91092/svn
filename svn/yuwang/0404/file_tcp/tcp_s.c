/*************************************************************************
  > File Name: tcp_s.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Fri 04 Apr 2014 11:19:56 AM CST
 ************************************************************************/

#include"tcp.h"
#define MAXLINE 1024

void usage(char *command)
{
	printf("usage :%s portnum filename\n", command);
	exit(0);
}
int main(int argc, char *argv[])
{
	struct sockaddr_in serv_addr, clie_addr;
	char buf[MAXLINE];
	int sock_id, link_id, recv_len, write_len,clie_addr_len;
	FILE *fp;

	if(argc!=3)
	{
		usage(argv[0]);
	}
	if((fp=fopen(argv[2], "w"))==NULL)
	{
		perror("open file failed\n");
		exit(0);
	}
	if((sock_id=socket(AF_INET, SOCK_STREAM, 0))==-1)
	{
		perror("create socket failed\n");
		exit(0);
	}

	memset(&serv_addr, 0 ,sizeof(serv_addr));
	serv_addr.sin_family=AF_INET;
	serv_addr.sin_port=htons(atoi(argv[1]));
	serv_addr.sin_addr.s_addr=htonl(INADDR_ANY);

	if(bind(sock_id,(struct sockaddr *)&serv_addr,sizeof(serv_addr))==-1)
	{
		perror("bind socket failed\n");
		exit(0);
	}

	if(-1==listen(sock_id, 10))
	{
		perror("listen socket failed\n");
		exit(0);
	}

	while(1)
	{
		clie_addr_len=sizeof(clie_addr);
		link_id=accept(sock_id,(struct sockaddr*)&clie_addr,&clie_addr_len);
		if(link_id==-1)
		{
			perror("accept socket failed\n");
			exit(0);
		}
		bzero(buf, MAXLINE);
		while(recv_len=recv(link_id, buf, MAXLINE, 0))
		{
			if(recv_len<0)
			{
				printf("receive data from server failed!\n");
				break;
			}
			printf("#");
			write_len=fwrite(buf, sizeof(char), recv_len, fp);
			if(write_len<recv_len)
			{
				printf("write file failed\n");
				break;
			}
			bzero(buf, MAXLINE);
		}
		printf("\nfinish receive\n");
		fclose(fp);
		close(link_id);
	}
	close(sock_id);
	return 0;
}

