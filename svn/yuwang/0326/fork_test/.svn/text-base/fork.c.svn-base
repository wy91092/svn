/*************************************************************************
	> File Name: fork.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 28 Mar 2014 10:21:03 AM CST
 ************************************************************************/

#include"fork.h"
static int is_operator(char ch)
{
   if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
   {
      return 1;
   }else
   {
      return 0;
   }
}
static int is_digit(char ch)
{
    if(ch>='0'&&ch<='9')
	{
	   return 1;
	}else
	{
	   return 0;
	}
}
static int is_space(char ch)
{
    if(is_digit(ch)||is_operator(ch)||ch=='('||ch==')')
    {
	   return 0;
	}else 
	{
	   return 1;
	}
}
void trim_space(char *src)
{
    int i=-1;
	int j=0;
	for(;j<strlen(src);j++)
	{
	    if(!is_space(src[j]))
		{
		   src[++i]=src[j];
		}
	}
	src[++i]='\0';
}
static int get_prio(char op)
{
    if(op=='+'||op=='-')
	{
	   return 1;
	}else if(op=='*'||op=='/'||op=='%')
	{
	   return 2;
	}else if(op=='('||op==')'||op=='#')
	{
	   return 0;
	}
}
static get_endfix(char *src, char *des)
{
      char stack[MAX_LINE];
	  int front, rear;
	  int top;
	  int index;
	  memset(stack, 0, MAX_LINE);
	  front=rear=top=-1;
	  stack[++top]='#';
	  for(index=0;index<strlen(src);index++)
	  {
	      if(is_digit(src[index]))
		  {
		     des[++rear]=src[index];
		  }else if(is_operator(src[index]))
	      {
		     des[++rear]=' ';
			 while(get_prio(stack[top])>=get_prio(src[index]))
			 {
			    des[++rear]=stack[top--];
			 }
			 stack[++top]=src[index];
		  }else if(src[index]=='(')
		  {
		     stack[++top]=src[index];
		  }else if(src[index]==')')
		  {
		      while(stack[top]!='(')
			  {
			    des[++rear]=stack[top--];
			  }
			  top--;
		  }
	  
	  }
	  while(top)
	  {
	    des[++rear]=stack[top--];
	  }
	  des[++rear]='\0';
}
static int left_op_right(int left, int right, char op)
{
   switch(op)
   {
	   case '+':
		     return left +right;
			 break;
        
	   case '-':
		     return left -right;
			 break;
         
	   case '*':
		     return left *right;
			 break;
   
	     
	   case '/':
		     return left /right;
			 break;
        case '%':
		     return left %right;
			 break;
   }
}
static int sum_endfix(char *exp)
{
    int stack[MAX_LINE];
	int top=-1;
	memset(stack, 0, MAX_LINE);
	int sum=0;
	int num, index;
	int flag;
	for(index=0;index<strlen(exp);index++)
	{
	   num=0;
	   flag=0;
	   while(is_digit(exp[index]))
	   {
	       flag=1;
		   num=10*num+exp[index]-'0';
		   index++;
	   }
	   printf("num:%d\n",num);
	   if(flag)
	   {
	      stack[++top]=num;
	   }
	   if(is_operator(exp[index]))
	   {
	     int ret=left_op_right(stack[top-1],stack[top],exp[index]);
	     top--;
		 top--;
		 stack[++top]=ret;
	   }
	}
   return stack[top];
}

int sum_express(char *express)
{
   char endfix[MAX_LINE]="";
   get_endfix(express, endfix);
   printf("endfix:%s\n", endfix);
   return sum_endfix(endfix);
}
