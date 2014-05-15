/*************************************************************************
	> File Name: testmain.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 26 Mar 2014 06:11:05 PM CST
 ************************************************************************/

#include"txt_sat.h"
int main(int argc, char *argv[])
{
     char cmd[128];
	 char key_word[32],search_word[64];
	 int *next;
     pTXT pCur_Txt;
	 int index,flag,results;
	 if(argc==1)
	 {
	    printf("USAGE: EXE FILE\n");
	    return 0;
	 }
	 pCur_Txt =init_txt(argv[1]);
	 while(memset(cmd, 0, 32),fgets(cmd, 32, stdin)!=NULL)
	 {
	      trim_space(cmd);
	      memset(key_word, 0, 32);
	      memset(search_word, 0, 64);
		  sscanf(cmd, "%s%s", key_word, search_word);
		  if(strncmp(key_word, "wc", 2)==0)
		  {
		         switch(search_word[0])
				 {
					 case 'c':
						 {
						 printf("file:->%s:chars:%d\n,argv[1],pCur_Txt->char_num");
						 }
						 break;
					 case 'w':
						 {
						 printf("file:->%s:words:%d\n,argv[1],pCur_Txt->word_num");
					     }
						 break;
					 case 'l':
						 {
						 printf("file:->%s:lines:%d\n,argv[1],pCur_Txt->line_num");
						 }
						 break;
					default: printf("wrong!\n");
				 }
		  }else if(strncmp(key_word,"search",6)==0)
		  {
		    memset(search_word,0,64);
			strcpy(search_word,cmd+strlen("search"));
			trim_space(search_word);
			puts(search_word);
		    index=0;
			flag=0;
			results=0;
			while(index<pCur_Txt->line_num)
			{
		     	if(kmp_search(pCur_Txt->des_txt[index],search_word)==1)
		    	{
			    flag=1;
			     results++;
			     printf("line-%d:%s\n",index+1,pCur_Txt->src_txt[index]);
		    	}
			index++;
			}
			if(!flag)
			{
			   printf("No Results!\n");
			}else
			{
			   printf("results:%d\n",results);
			}
		  }else if(strncmp(key_word,"top", 3)==0)
		  {
		     int top=-1;
		     top=atoi(search_word);
		    index=0;
		    for(;index<top&&top<pCur_Txt->word_e_num;index++)
			{
			  printf("top : %d:word :%s : count: %d\n",index+1,pCur_Txt->des_word[index].word,pCur_Txt->des_word[index].count);
			}
		  }
	 }
   destory_txt(pCur_Txt);
   return 0;
}

