/*************************************************************************
  > File Name: main.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Wed 26 Mar 2014 02:17:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char buf[128]="";
	int iret;
	while(memset(buf,0,128),(iret=read(0,buf,128))>0)
	{
		buf[iret]='\0';
		char cmd[128]="";
		sprintf(cmd, "./up_to_low %s", buf);
		system(cmd);
	}
	return 0;
}
