/*************************************************************************
	> File :Name: server.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 02 Apr 2014 02:22:39 PM CST
 ************************************************************************/

#include"udp.h"
int main(int argc, char *argv[])
{
  int server_fd,iret;
  char recv_buf[128],send_buf[128];
  struct sockaddr_in server_addr,client_addr;
  
  //socket
  server_fd=socket(AF_INET, SOCK_DGRAM, 0);
  if(server_fd==-1)
  {
     perror("socket!\n");
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
     perror("bind!\n");
	 close(server_fd);
	 exit(-1);
  }

  //listen
 /* iret=listen(server_fd, 10);
  if(iret==-1)
  {
    perror("listen!\n");
    close(server_fd);
	exit(-1);
  }
*/
  //accept
 /* memset(&client_addr,0, sizeof(struct sockaddr_in));
  int addrlen=sizeof(struct sockaddr_in);
  int new_fd=accept(server_fd, (struct sockaddr*)&client_addr,&addrlen);
  if(new_fd==-1)
  {
     perror("accept!\n");
     close(server_fd);
	 exit(-1);
  }
  printf("%s %d success connect\n",inet_ntoa(client_addr.sin_addr),ntohs(client_addr.sin_port));
*/
  //recv/recvfrom
  memset(&client_addr, 0, sizeof(client_addr));
  memset(recv_buf, 0, 128);
  int len=sizeof(client_addr);
  recvfrom(server_fd,recv_buf,128,0,(struct sockaddr*)&client_addr,&len);
  char ip[32]="";
  printf("receive from ip :%s, port:%d,message :%s\n",inet_ntoa(client_addr.sin_addr),ntohs(client_addr.sin_port), recv_buf);
 /* iret=recv(new_fd, buf, sizeof(buf),0);
  if(iret==-1)
  {
     perror("recv!\n");
     close(new_fd);
	 close(server_fd);
	 exit(-1);
  }
*/
  //sendto
  memset(send_buf, 0, 128);
  strcpy(send_buf,"I see you!\n");
  sendto(server_fd,send_buf,strlen(send_buf),0,(struct sockaddr*)&client_addr,sizeof(client_addr));
 /* iret=send(new_fd, "got you",8,0);
  if(iret==-1)
  {
     perror("send!\n");
     close(new_fd);
	 close(server_fd);
	 exit(-1);
   }
  */
  //close
  close(server_fd);
  return 0;  
}
