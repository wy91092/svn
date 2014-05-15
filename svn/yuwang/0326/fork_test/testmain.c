/*************************************************************************
	> File Name: testmain.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 28 Mar 2014 11:16:53 AM CST
 ************************************************************************/

#include"fork.h"
static clear_stdin()
{
   while(getchar()!='\n'||getchar()!='\0');
}
int main(int argc, char*argv[])
{
    int fd_wr_rd[2];
	int fd_rd_wr[2];
    pid_t pid;
	char express[MAX_LINE];
	char result[MAX_LINE];
	int iret;
	pipe(fd_wr_rd);
	pipe(fd_rd_wr);
	pid=fork();
	if(pid>0)
	{
	  while(memset(express, 0, MAX_LINE),fgets(express, MAX_LINE, stdin)!=NULL)
	  {
	     trim_space(express);
		 write(fd_wr_rd[1], express, strlen(express));
		 memset(result, 0, MAX_LINE);
		 iret=read(fd_rd_wr[0], result, MAX_LINE);
		 result[iret]='\0';
		 write(1, result, strlen(result));
	  }
	     int status;
		 pid=wait(&status);
		 printf("child %d exit \n",pid);
	}else if(pid==0)
	{
	    int sum;
		while(memset(express, 0, MAX_LINE), (iret=read(fd_wr_rd[0],express,MAX_LINE))>0)
		{
		    sum=0;
			express[iret]='\0';
			puts(express);
			sum=sum_express(express);
			memset(result, 0, MAX_LINE);
		    sprintf(result, "sum =%d\n",sum);
			write(fd_rd_wr[1], result, strlen(result));
		}
	    printf("bye!\n");
	    exit(1);
	}
	return 0;
}
