#include "tcp.h"
#define SIZE 1024
int num = 0 ;
void* send_file(void* arg)
{
				int fd_client = *(int*)arg;
				char* send_buf = (char*)malloc(SIZE);
				int fd_file = open("./tcp_s.c",O_RDONLY);
				if(fd_file == -1)
				{
								perror("open");
								exit(-1);
				}		
				int readn ; 
				int count = 0 ;
				while(memset(send_buf, 0, SIZE),(readn = read(fd_file, send_buf, SIZE)) > 0)
				{
								count ++ ;
								//printf("read from file : %d \n", readn);
								int sendn = send(fd_client,send_buf,readn, 0 );
								//printf("count: %d send to client : %d \n",count, sendn);

				}	
				printf("finish ! \n");
				close(fd_file);
				close(fd_client);
}
int main(int argc, char* argv[])
{
				int fd_file ;
				pthread_t thd ;
				int fd_server, fd_client ;
				fd_server = socket(AF_INET, SOCK_STREAM, 0);
				if(fd_server == -1)
				{
								perror("socket");
								exit(-1);
				}
				struct sockaddr_in server_addr ;
				memset(&server_addr, 0, sizeof(server_addr));
				server_addr.sin_family = AF_INET ;
				server_addr.sin_port = htons(atoi(argv[2]));
				server_addr.sin_addr.s_addr = inet_addr(argv[1]);
				if(-1 == bind(fd_server, (struct sockaddr*)&server_addr, sizeof(server_addr)))
				{
								perror("bind");
								close(fd_server);
								exit(-1);
				}
				listen(fd_server, 5);
				while(1){
								 fd_client = accept(fd_server, NULL, NULL); 
								pthread_create(&thd, NULL, send_file,(void*)&fd_client );
								printf("a client connect!: %d \n", ++num);
				}
				close(fd_server);
				return 0 ;
}
