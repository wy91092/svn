/*************************************************************************
	> File Name: match.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 24 Mar 2014 08:29:20 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char*argv[])
{
   int flag=0;
   FILE *fp=NULL;
   fp=fopen(argv[1], "rb");
   char ch;
   char stack[500];
   memset(stack, 0, sizeof(stack));
   int top= -1;
   while((ch=fgetc(fp))!=-1)
   {
       if(ch=='('||ch=='['||ch=='{')
	   {
	      stack[++top]=ch;   
	   }
       if(ch==')')
	   {
	        if(stack[top]=='(')
			{
			  --top;
			}
	        else
			{
			   flag=1;
			   break;
			}
	   }
	   if(ch==']')
	   {
	       if(stack[top]=='[')
		   {
		      --top;
		   }
		   else
		   {
		       flag=1;
			   break;
		   }
	   }
	   if(ch=='}')
	   {
	       if(stack[top]=='{')
		   {
		      --top;
		   }
		   else
		   {
		       flag=1;
			   break;
		   }
	   }
   }
   if(flag==1||top!=-1)
   {
      printf("Defeat!!!\n");
   }
   else
   {
      printf("Victory, genius!!\n");
   }
   return 0;
}

