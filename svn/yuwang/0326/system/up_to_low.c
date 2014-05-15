/*************************************************************************
	> File Name: up_to_low.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 26 Mar 2014 02:21:04 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void up_to_low(char*src)
{
   int i=0;
   int len=strlen(src);
   while(i<len)
   {
     if(src[i]>='A'&&src[i]<='Z') src[i]=src[i]+32;
	 i++;
   }
}


int main(int argc, char *argv[])
{    int i;
     for(i=1;i<argc;i++)
	 {
     up_to_low(argv[i]);
	 puts(argv[i]);
	 }
	 printf("\n");
	 return 0;

}
