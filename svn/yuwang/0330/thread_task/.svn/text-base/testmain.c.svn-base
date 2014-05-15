/*************************************************************************
	> File Name: testmain.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 30 Mar 2014 06:18:28 PM CST
 ************************************************************************/

#include"test.h"
int front1=-1,front2=-1,front3=-1,rear1=-1,rear2=-1,rear3=-1;
int mutex1=1, mutex2=1, mutex3=1;
char task1[1024][128];
char task2[1024][128];
char task3[1024][128];
void handl1(char *src)
{
    int index;
	for(index =0; index<strlen(src);index++)
	{
	   if(src[index]>='A'&&src[index]<='Z')
	   {
	      src[index]+=32;
	   }
	}
    printf("\n");
}
void handl2(char *src)
{
    int low , high;
	low=0;
	high=strlen(src)-1;
    while(low<high)
	{
	   src[low]^=src[high];
	   src[high]^=src[low];
	   src[low]^=src[high];
	   low++;
	   high--;
	}
}
void handl3(char *src)
{
     int index;
     char pre=' ';
	 int count=0;
	 for(index=0;index<strlen(src);index++)
	 {
	     if(pre==' '&&src[index]!=' ')
		 {
		    count++;
		 }
	     pre=src[index];
	 }
    printf("count: %d\n",count);
	//return count;
}
void *thd1_handle(void *arg)
{
    int fd_1r=(int) arg;
	while(1)
	{
	  while(mutex1==0);
	  mutex1=0;
    if(front1==rear1)
	{
	   mutex1=1;
	}else
	{
	    handl1( task1[++front1]);
	    write(fd_1r, task1[front1], strlen( task1[front1]));
		write(1, task1[front1], strlen(task1[front1]));
		mutex1=1;
	}
	}
}
void *thd2_handle(void *arg)
{
    int fd_2r=(int) arg;
	while(1)
	{
	  while(mutex2==0);
	  mutex2=0;
    if(front2==rear2)
	{
	   mutex2=1;
	}else
	{
	    handl2( task2[++front2]);
	    write(fd_2r, task2[front2], strlen( task2[front2]));
		write(1, task2[front2], strlen(task2[front2]));
		mutex2=1;
	}
	}
}
void *thd3_handle(void *arg)
{
    int fd_3r=(int) arg;
	while(1)
	{
	  while(mutex3==0);
	  mutex3=0;
    if(front3==rear3)
	{
	   mutex3=1;
	}else
	{
	     handl3( task3[++front3]);
	    write(fd_3r, task3[front3], strlen( task3[front3]));
		write(1, task3[front3], strlen(task3[front3]));
		mutex3=1;
	}
	}
}
int main()
{
       mkfifo ("1w.fifo",0777);
       mkfifo ("1r.fifo",0777);
       mkfifo ("2w.fifo",0777);
       mkfifo ("2r.fifo",0777);
       mkfifo ("3w.fifo",0777);
       mkfifo ("3r.fifo",0777);
       int fd_1w = open("1w.fifo",O_RDONLY); 
       int fd_1r = open("1r.fifo",O_WRONLY); 
       
	   int fd_2w = open("2w.fifo",O_RDONLY); 
       int fd_2r = open("2r.fifo",O_WRONLY); 
       
	   int fd_3w = open("3w.fifo",O_RDONLY); 
       int fd_3r = open("3r.fifo",O_WRONLY); 
       printf("%d %d %d %d %d %d\n",fd_1w,fd_1r,fd_2w,fd_2r,fd_3w,fd_3r);
	   
	   pthread_t thd1, thd2, thd3;

	   pthread_create(&thd1, NULL, thd1_handle, (void *)fd_1r);
	   pthread_create(&thd2, NULL, thd2_handle, (void *)fd_2r);
	   pthread_create(&thd3, NULL, thd3_handle, (void *)fd_3r);
       
	   fd_set fd_rd, fd_back;
	   FD_ZERO(&fd_rd);
	   FD_SET(fd_1w,&fd_rd);
	   FD_SET(fd_2w,&fd_rd);
	   FD_SET(fd_3w,&fd_rd);
       struct timeval tm;
	   tm.tv_sec=1;
	   tm.tv_usec=0;
	   
	   while(1)
	   {
	       fd_back =fd_rd;
		   select(1024, &fd_back, NULL,NULL, &tm);
		   if(FD_ISSET(fd_1w, &fd_back))
		   {
		       while(mutex1==0);
			   mutex1=0;
			   int iret=read(fd_1w, task1[++rear1], 128);
		       mutex1=1;
		   }
		   if(FD_ISSET(fd_2w, &fd_back))
		   {
		       while(mutex2==0);
			   mutex2=0;
			   int iret=read(fd_2w, task2[++rear2], 128);
		       mutex2=1;
		   }
		   if(FD_ISSET(fd_3w, &fd_back))
		   {
		       while(mutex3==0);
			   mutex3=0;
			   int iret=read(fd_3w, task3[++rear3], 128);
		       mutex3=1;
		   }
	   }
	   unlink ("1w.fifo");
	   unlink ("1r.fifo");
	   unlink ("2w.fifo");
	   unlink ("2r.fifo");
	   unlink ("3w.fifo");
	   unlink ("3r.fifo");
       return 0;
}

