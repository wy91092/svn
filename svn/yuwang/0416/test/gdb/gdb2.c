/*************************************************************************
	> File Name: gdb2.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 01:10:21 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<string.h>
void dump(int signo)
{
  char buf[1024];
  char cmd[1024];
  FILE *fh;

  snprintf(buf, sizeof(buf),"/proc/%d/cmdline", getpid());
  if(!(fh=fopen(buf,"r")))
	  exit(0);
  if(!fgets(buf,sizeof(buf),fh))
	  exit(0);
  fclose(fh);
  if(buf[strlen(buf)-1]=='\n')
	  buf[strlen(buf)-1]='\0';
  snprintf(cmd, sizeof(cmd), "gdb%s%d",buf, getpid());
  system(cmd);

  exit(0);
}
void dummy_function()
{
  unsigned char *ptr=0x00;
  *ptr=0x00;
}

int main()
{
   signal(SIGSEGV, &dump);
   dummy_function();
   return 0;
}