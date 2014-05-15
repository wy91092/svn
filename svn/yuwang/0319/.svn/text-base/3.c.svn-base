#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int str_match(char *pattern, char *src)
{
    int i=0,j=0;
	int len_pattern,len_src;
	len_pattern=strlen(pattern);
	len_src=strlen(src);
	while(len_pattern<=len_src-i&&i<=len_src-1)
	{
	  if(src[i]==pattern[j])
	  {
	    ++i;
		++j;
		  
	  }
	  else
	   {
	    j=0;	  
     	}
		
	}
	if(j==len_pattern) return 1;
	else return 0;
}


int main()
{  int tag;
   char *pattern,*src;
   gets(src);
   gets(pattern);
   tag=str_match(pattern,src);
   printf("%d\n",tag);
   
   
  return 0;
	
}
