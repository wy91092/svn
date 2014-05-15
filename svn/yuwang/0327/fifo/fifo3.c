/*************************************************************************
	> File Name: fifo2.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 28 Mar 2014 12:11:08 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<limits.h>
#define FIFO_NAME "/tmp/my_fifo"
#define BUFFER_SIZE PIPE_BUF
#define TEN_MEG (1024*1024*10)

int main(int argc, char *argv[])
{
	int pipe_fd;
   int res;
   int open_mode=O_WRONLY;
   int bytes_sent=0;
   char buffer[BUFFER_SIZE+1];
  /* if(argc<2)
   {
      fprintf(stderr,"Usage: %s <some combination of O_RDONLY O_WRONLY O_NONBLOCK>\n", *argv);
	  exit(EXIT_FAILURE);
   }

   for(i=1; i<argc;i++)
   {
       if(strncmp(*++argv, "O_RDONLY", 8)==0)
		   open_mode |=O_RDONLY;
       if(strncmp(*argv, "O_WRONLY", 8)==0)
		   open_mode |=O_WRONLY;
       if(strncmp(*argv, "O_NONBLOCK", 10)==0)
		   open_mode |=O_NONBLOCK;
   }*/

   if(access(FIFO_NAME, F_OK)==-1)
   {
      res=mkfifo(FIFO_NAME, 0777);
	  if(res!=0)
	  {
	     fprintf(stderr, "could not create fifo %s\n",FIFO_NAME);
	     exit(EXIT_FAILURE);
	  }
   }
   printf("Process %d opening FIFO O_WRONLY\n", getpid());
   pipe_fd=open(FIFO_NAME, open_mode);
   printf("Process %d result %d\n",getpid(), pipe_fd);
 //  sleep(5);
   if(pipe_fd!=-1) 
   {
     while(bytes_sent<TEN_MEG)
	 {
	   res=write(pipe_fd, buffer, BUFFER_SIZE);
	   if(res==-1)
	   {
	     fprintf(stderr, "write error on pipe\n");
	     exit(EXIT_FAILURE);
	   }
	   bytes_sent  += res;
	 }
     (void)close(pipe_fd);
   }
   else
   {
     exit(EXIT_FAILURE);
   }
   printf("Process %d finished\n",getpid());
   exit(EXIT_SUCCESS);
}
