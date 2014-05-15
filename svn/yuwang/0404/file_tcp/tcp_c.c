/*************************************************************************
  > File Name: tcp_c.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Fri 04 Apr 2014 11:52:30 AM CST
 ************************************************************************/

#include"tcp.h"
#define MAXLINE  1024
void usage(char *command)
{
	printf("usage :%s ipaddr portnum filename\n", command);
	exit(0);
}
int main(int argc, char *argv[])
{
	struct sockaddr_in serv_addr;
	char buf[MAXLINE];
	int sock_id, read_len, send_len;
	FILE *fp;
	int iret;

	if(argc!=4)
	{
		usage(argv[0]);
	}

	if((fp=fopen(argv[3], "r"))==NULL)
	{
		perror("open file failed\n");
		exit(0);
	}

	if((sock_id=socket(AF_INET, SOCK_STREAM, 0))<0)
	{
		perror("create socket failed\n");
		exit(0);
	}

	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family=AF_INET;
	serv_addr.sin_port=htons(atoi(argv[2]));
	inet_pton(AF_INET, argv[1], &serv_addr.sin_addr);

	iret=connect(sock_id, (struct sockaddr*)&serv_addr,sizeof(struct sockaddr));
	if(iret==-1)
	{
		printf("connect socket failed\n");
		return -1;
	}

	bzero(buf, MAXLINE);
	while((read_len=fread(buf, sizeof(char),MAXLINE,fp))>0)
	{
		send_len=send(sock_id, buf, read_len, 0);
		if(send_len<0)
		{
			perror("send file failed\n");
			exit(0);
		}
		bzero(buf, MAXLINE);
	}
	fclose(fp);
	close(sock_id);
	printf("send finish\n");
	return 0;

}
