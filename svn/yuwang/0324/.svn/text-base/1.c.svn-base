/*************************************************************************
	> File Name: 1.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 26 Mar 2014 11:14:44 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char line[]="I LOVE you ,        :?  can you    feel  mY  World    ";
    int index=0;
	int len=strlen(line);
	while(index<len)
	{
	   if(line[index]>='A'&&line[index]<='Z')
	   {
	       line[index]=line[index]+32;
		   index++;
	   }
	   else if(line[index]==' '&&line[index+1]==' ')
	   {
	       int j=index+1;
		   for(;j<len;j++)
		   {
		      line[j-1]=line[j];
		   }
		   len--;
	   }
	   else if(line[index]==','||line[index]=='.'||line[index]=='?'||line[index]=='!'||line[index]==':')
	   {
	      int j=index;
		  for(;j<len;j++)
		  {
		     line[j]=line[j+1];
		  }
		  len--;
	   }
	   else
	   {
	   index++;
	   }
	}
	line[index]='\0';

	puts(line);
	return 0;
}
