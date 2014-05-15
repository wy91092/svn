/*************************************************************************
	> File Name: 1.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 24 Mar 2014 05:08:15 PM CST
 ************************************************************************/
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main(int argc, char *argv[])
{
  int fd,_write=0,_read=0;
  char ch[60];
   fd=open(argv[1], O_RDWR);
//  fd=open(argv[1],O_RDONLY);
  if(fd ==-1)
  {
  printf("Defeat~~\n");
  }
  while(fgets(ch,sizeof(char)*60,stdin)!=NULL)
  {
  _write= write(fd,ch,strlen(ch) );
   printf("write:%d\n",_write);
   _read= read(fd,stdin,strlen(ch));
    printf("read:%d\n",_read);
  }
  
  
//  iret=read(fd,argv[1], sizeof(int)*100);
 // printf("iret=%d\n",iret);
  close(fd);
  return 0;
}
