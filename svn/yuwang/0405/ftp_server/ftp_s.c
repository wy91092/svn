#include "ftp.h"
#define SIZE 1024
int num = 0 ;
int iret=0;
void* thd_get(void* arg)
{
	int fd_client = *(int*)arg;
	char buf[128]="";	
	//	char* send_buf = (char*)malloc(SIZE);
	/*	int fd_file = open("./tcp_s.c",O_RDONLY);
		if(fd_file == -1)
		{
		perror("open");
		exit(-1);
		}		
		int readn ; 
		int count = 0 ;
		*/	while(memset(buf, 0, 128))//,(readn = read(fd_file, send_buf, SIZE)) > 0)
	{
		//	count ++ ;
		//printf("read from file : %d \n", readn);
		//	int sendn = send(fd_client,send_buf,readn, 0 );
		//printf("count: %d send to client : %d \n",count, sendn);
		iret=recv(fd_client,buf,strlen(buf), 0);
		printf("%s\n",buf);
	}	
	//	printf("finish ! \n");
	//	close(fd_file);
	close(fd_client);
    pthread_exit(NULL);
}
void *thd_ls(void *arg)
{
	int fd_client = *(int*)arg;
	close(fd_client);
    pthread_exit(NULL);
}
void *thd_put(void *arg)
{
	int fd_client = *(int*)arg;
	close(fd_client);
    pthread_exit(NULL);
}
void *thd_remove(void *arg)
{
	int fd_client = *(int*)arg;
	close(fd_client);
    pthread_exit(NULL);
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

	char buf[128]="";	
	memset(buf, 0, 128);
	struct sockaddr_in client_addr;
	memset(&client_addr, 0, sizeof(struct sockaddr));
	int len=sizeof(struct sockaddr);
	fd_client = accept(fd_server,(struct sockaddr*)&client_addr, &len); 					     
	pthread_t 1_thd,2_thd,3_thd,4_thd;
	while(1)
	{
       
		//      pthread_create(&thd, NULL, send_file,(void*)&fd_client );

		iret=recv(fd_client,buf,128, 0);
		if(iret<=0)
		{
			perror("nothing receive!!!");

		}
		buf[iret]='\0';
		write(1,buf, strlen(buf));
		//		printf("a client connect!: %d \n", ++num);
		if(strncmp(buf, "ls", 2)==0)
		{
		pthread_create(&1_thd, NULL,thd_ls,(void *)&fd_client );
		pthread_join(1_thd, NULL);
		}
		else if(strncmp(buf, "get filename",12)==0)
		{
		pthread_create(&2_thd, NULL,thd_get,(void *)&fd_client );
		pthread_join(2_thd, NULL);
		
		}
	    else if(strncmp(buf, "put filename",12)==0)
		{
		pthread_create(&3_thd, NULL,thd_put,(void *)&fd_client );
		pthread_join(3_thd, NULL);
		
		}
		else if(strncmp(buf, "remove filename", 15)==0)
		{
		pthread_create(&4_thd, NULL,thd_remove,(void *)&fd_client );
		pthread_join(4_thd, NULL);
		
		}
		else 
		{
		
		}
		
		
		memset(buf, 0, 128);
		strcpy(buf,"I see you!\n");
		iret=send(fd_client, buf ,strlen(buf), 0);
		if(iret==-1)
		{
			perror("send nothing");
			exit(-1);
		}
	}
	close(fd_server);
	return 0 ;
}
