/*************************************************************************
	> File Name: server.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 02 Apr 2014 08:39:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  int sfd=socket(AF_INET,SOCK_DGRAM,0);
  if(sfd==-1)
  {
     perror("socket");
     exit(-1);
  }

  struct sockaddr_in saddr;
  bzero(&saddr, sizeof(saddr));
  saddr.sin_family =AF_INET;
  saddr.sin_port=htons(8888);
  saddr.sin_addr.s_addr=INADDR_ANY;
  if(bind(sfd,(struct sockaddr*)&saddr,sizeof(struct sockaddr))==-1)
  {
     perror("bind");
     close(sfd);
	 exit(-1);
  }

  char buf[512]={0};
  struct sockaddr_in fromaddr;
  bzero(&fromaddr, sizeof(fromaddr));
  int fromaddrlen=sizeof(struct sockaddr);
  if(recvfrom(sfd, buf, sizeof(buf), 0, (struct sockaddr*)&fromaddr,&fromaddrlen)==-1)
  {
     perror("recvfrom");
     close(sfd);
	 exit(-1);
  }
  printf("receive from %s, port: %d, message :%s\n",inet_ntoa(fromaddr.sin_addr),ntohs(fromaddr.sin_port), buf);

  FILE *fp=fopen("1.txt", "rb");
  struct stat st;
  stat("1.txt", &st);
  int filelen=st.st_size;
  sendto(sfd, (void*)&filelen,sizeof(int),0,(struct sockaddr*)&fromaddr,sizeof(struct sockaddr));
  while(!feof(fp))
  {
     int len =fread(buf, 1, sizeof(buf),fp);
     sendto(sfd,buf,len,0,(struct sockaddr*)&fromaddr,sizeof(struct sockaddr));
  }
  close(sfd);
}
