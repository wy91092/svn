/*************************************************************************
  > File Name: tcp_c.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Fri 04 Apr 2014 12:24:59 PM CST
 ************************************************************************/

#include"ftp.h"
#define SIZE 10*1024*1024
void init(char *line)
{
	int index=0;
	int len=strlen(line);
	while(index<len)
	{
		if(line[index]>='A'&&line[index]<='Z')
		{
			line[index]=line[index]+32;
			index++;
		}
		else if(line[index]==' '&&line[index+1]==' ')
		{
			int j=index+2;
			for(;j<len;j++)
			{
				line[j-1]=line[j];
			}
			len--;
		}
		else if(line[index]==','||line[index]=='.'||line[index]=='?'||line[index]=='!'||line[index]==':')
		{
			int j=index;
			for(;j<len;j++)
			{
				line[j]=line[j+1];
			}
			len--;
		}
		else
		{
			index++;
		}
	}
	line[index]='\0';
}
int main(int argc, char *argv[])
{
	int fd_client,iret,fd_file;
	char buf[SIZE];
	fd_client=socket(AF_INET, SOCK_STREAM, 0);
	if(fd_client==-1)
	{
		perror("socket");
		exit(-1);
	}
	struct sockaddr_in server_addr;
	memset(&server_addr, 0, sizeof(server_addr));
	server_addr.sin_family=AF_INET;
	server_addr.sin_port=htons(atoi(argv[2]));
	server_addr.sin_addr.s_addr=inet_addr(argv[1]);

	iret=connect(fd_client,(struct sockaddr*)&server_addr, sizeof(server_addr));
	if(iret==-1)
	{
		perror("connect");
		exit(-1);
	}

	// sleep(3);
	while(1)
	{
		char cmd[128]="";
		memset(cmd, 0, 128);
		iret=read(0, cmd, 128);
		if(iret<=0){perror("no news\n");exit(1);}
		init(cmd);
		printf("%s : \n",cmd);

		iret=send(fd_client, cmd, strlen(cmd), 0 );
		if(iret<=0)
		{
			perror("nothing send!\n");
		}
		char buf[128]="";
		iret=recv(fd_client, buf, 128,0);
		buf[iret]='\0';
		write(1, buf, strlen(buf));
	}
	/* 
	   fd_file=open("./txt", O_WRONLY|O_CREAT);
	   if(fd_file==-1)
	   {
	   perror("open");
	   exit(-1);
	   }
	   int nrecv,count=0;
	   while(memset(buf, 0, SIZE), (nrecv=recv(fd_client, buf, SIZE, 0))>0)
	   {
	   count++;
	   printf("%d\n",count);
	   printf("recv from server: %d\n", nrecv);
	   int nwrite=write(fd_file, buf, nrecv);
	   printf("write to file: %d\n",nwrite);
	   }
	   printf("got it!\n");
	   close(fd_file);
	   */
	close(fd_client);
	return 0;
}
