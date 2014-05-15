/*************************************************************************
	> File Name: tcp_c.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 04 Apr 2014 10:10:28 AM CST
 ************************************************************************/

#include"tcp.h"
int main(int argc, char *argv[])
{
   int fd_client,iret;
   fd_client=socket(AF_INET,SOCK_STREAM,0);
   if(fd_client==-1)
   {
       perror("socket");
       exit(-1);
   }
   struct sockaddr_in server_addr;
   memset(&server_addr,0, sizeof(struct sockaddr));
   server_addr.sin_family=AF_INET;
   server_addr.sin_port=htons(atoi(argv[2]));
   server_addr.sin_addr.s_addr=inet_addr(argv[1]);
   iret=connect(fd_client, (struct sockaddr*)&server_addr,sizeof(server_addr));
   if(iret==-1)
   {
      perror("connect");
      exit(-1);
   }
   while(1)
   {
   char send_buf[128]="";
   memset(send_buf, 0, 128);
   iret=read(0, send_buf,128);
   send(fd_client,send_buf, strlen(send_buf), 0);
   char buf[128]="";
   iret=recv(fd_client, buf, 128,0);
   buf[iret]='\0';
   write(1, buf, strlen(buf));
   }
   close(fd_client);
   return 0;
}
