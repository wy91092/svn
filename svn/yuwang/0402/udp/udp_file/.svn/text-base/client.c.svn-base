/*************************************************************************
	> File Name: client.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 02 Apr 2014 08:54:12 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#define BUFSIZE 512
int main(int argc, char *argv[])
{
  int sfd=socket(AF_INET, SOCK_DGRAM, 0);
  if(sfd==-1)
  {
     perror("socket");
	 exit(-1);
  }
  struct sockaddr_in toaddr;
  bzero(&toaddr, sizeof(toaddr));
  toaddr.sin_family=AF_INET;
  toaddr.sin_port=htons(atoi(argv[2]));
  toaddr.sin_addr.s_addr=inet_addr(argv[1]);
  sendto(sfd, "hello", 6, 0,(struct sockaddr*)&toaddr,sizeof(struct sockaddr));
  char buf[BUFSIZE]={0};
  struct sockaddr_in fromaddr;
  bzero(&fromaddr, sizeof(fromaddr));
  int fromaddrlen=sizeof(struct sockaddr);
  int filelen=0;
  FILE *fp=open("2.txt","w+r");
  recvfrom(sfd,(void *)&filelen,sizeof(int),0,(struct sockaddr*)&fromaddr,&fromaddrlen);
  printf("the length of file is %d\n", filelen);
  printf("create a new file!\n");
  printf("begin to receive file content!\n");

  while(1)
  {
     int len=recvfrom(sfd,buf,sizeof(buf),0,(struct sockaddr*)&fromaddr,&fromaddrlen);
	 if(len<BUFSIZE);
	 {
	   fwrite(buf, sizeof(char),len ,fp);
	   break;
	 }
     fwrite(buf, sizeof(char), len ,fp);
  }
  printf("receive file finished!\n");
  close(sfd);
}
