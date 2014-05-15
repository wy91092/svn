/*************************************************************************
  > File Name: search.c
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Mon 24 Mar 2014 09:32:39 PM CST
 ************************************************************************/

#include"search.h"

void show_line(char *file_name)
{
	FILE *fp;
	int ch;
	int line=0;
	int char_num=0;
	fp=fopen(file_name,"rb" );
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n') 
		{
			line++;
		}
		if(ch!='\0')
		{
		    char_num++;
		}
	}
	//` line=line +1;
	printf("line=%d\n",line);
	printf("char_num=%d\n",char_num);
	fclose(fp);
}



void init(char *line)
{
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
	       int j=index+1+1;
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

}
int show_word(char *line)
{   
	int i=0;
	int word_num=0;
	for(i=0;i<strlen(line);i++)
	{
         if(line[i]==' ')
     	{
 	     word_num++;
	    }
	}
   return word_num+1;
}

void kmp_next(char *par, int *next)
{
     int par_len=strlen(par);
     int j=-1;
	 int i=0;
	 next[i]=j;
	 while(i<par_len-1)
	 {
	      if(j==-1||par[i]==par[j])
		  {
		     ++i;
			 ++j;
		     next[i]=j;
		  }
		  else
		  {
		     j=next[j];
		  }
	 }
}

int kmp_search(char *src, char *par)
{
    int i,j;
	int src_len=strlen(src);
	int par_len=strlen(par);
	int *next = (int *)malloc(strlen(par)*4);
	memset(next, 0, strlen(par)*4);
	kmp_next(par,next);
    i=0;
	j=0;
	while(i<src_len&&j<par_len)
	{
	    if(j==-1 || src[i]==par[j])
		{
		   i++;
		   j++;
		}
		else
		{
		   j=next[j];
		}
		free(next);
		if(j>=par_len)
		{
		  return 1;
		}
		else
		{
		   return 0;
		}
	
	}
}


