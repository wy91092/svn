/*************************************************************************
	> File Name: txt_sat.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 26 Mar 2014 05:08:33 PM CST
 ************************************************************************/

#include"txt_sat.h"
int word_comp(const void *left, const void *right)
{
    pTXT_WORD word_left,word_right;
	word_left=(pTXT_WORD)left;
	word_right=(pTXT_WORD)right;
	int count_left=word_left->count;
	int count_right=word_right->count;
	if(count_left> count_right)
	{
	    return -1;
	}else if(count_left==count_right)
	{
	     return 0;
	}else
	{
	     return 1;
	}
}

int is_space(char ch)
{
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'||ch>='0'&&ch<='9')
	{
	    return 0;
	}else
	{
	    return 1;
	}
}

void trim_space(char *src)
{
    int i,j;
	for(i=-1,j=0;j<strlen(src);j++)
	{
	     if(!is_space(src[j]))
		 {
		        if(src[j]>='A'&&src[j]<='Z')
				{
				  src[++i]=src[j]+32;
				}else
				{
				  src[++i]=src[j];
				}
		 
		 }else
		 {
		    if(i!=-1 &&!is_space(src[i]))
			{
			     src[++i]=' ';
			}
		 }
	}
	for(;i>=0;i--)
	{
	    if(!is_space(src[i]))
		{
		    break;
		}
	}
    src[++i] ='\0';
}

int num_word_line(char *src)
{
  int index;
  int num=0;
  char pre=' ';
  for(index=0; index<strlen(src); index++)
  {
       if(!is_space(src[index])&&pre==' ')
	   {
	       num++;
	   }
       pre=src[index];
  }
  return num;
}

int num_char_line(char *src)
{
   int index;
   int num=0;
   for(index=0; index <strlen(src); index++)
   {
       if(!is_space(src[index]))
	   {
	       num++;
	   }
   }
   return num;
}

pTXT init_txt(char *file_name)
{
      FILE *fp;
	  int index;
	  char word[32];
	  char line[MAX_TXT_LINE];
	  pTXT pCur_Txt =(pTXT)malloc(sizeof(TXT));
	  memset(pCur_Txt, 0, sizeof(TXT));
	  pCur_Txt ->des_word =(pTXT_WORD)malloc(MAX_WORD_LEN *sizeof(TXT_WORD));
	  memset(pCur_Txt->des_word, 0, MAX_WORD_LEN *sizeof(TXT_WORD));
      fp=fopen(file_name, "r");
	  if(fp==NULL)
	  {
	     printf("fopen \n");
		 exit(-1);
	  }
	  while(memset(line, 0, sizeof(line)),fgets(line,MAX_TXT_LINE,fp)!=NULL)
	  {
	    pCur_Txt->src_txt[pCur_Txt->line_num]=(char*)malloc(strlen(line)+1);
	    pCur_Txt->des_txt[pCur_Txt->line_num]=(char*)malloc(strlen(line)+1);
        memset(pCur_Txt->src_txt[pCur_Txt->line_num],0,strlen(line)+1);
        memset(pCur_Txt->des_txt[pCur_Txt->line_num],0,strlen(line)+1);
	    strcpy(pCur_Txt->src_txt[pCur_Txt->line_num],line);
		trim_space(line);
	    strcpy(pCur_Txt->des_txt[pCur_Txt->line_num],line);
        pCur_Txt->word_num +=num_word_line(line);
        pCur_Txt->char_num +=num_char_line(line);
        pCur_Txt->line_num ++;
	    int word_pos=0;
        while(memset(word,0,32),sscanf(line+word_pos,"%s",word)==1)
		{
		   word_pos+=strlen(word)+1;
		   index=0;
		   for(;index<pCur_Txt->word_e_num;index++)
		   {
		     if(strcmp(word,pCur_Txt->des_word[index].word)==0)
			 {
			   pCur_Txt->des_word[index].count++;
			   break;
			 }
		   }
		   if(index>=pCur_Txt->word_e_num)
		   {
		     pCur_Txt->word_e_num++;
			 strcpy(pCur_Txt->des_word[index].word,word);
		     pCur_Txt->des_word[index].count++;
		   }
	    }
	 }
	  qsort(pCur_Txt->des_word,pCur_Txt->word_e_num,sizeof(TXT_WORD),word_comp);
	  fclose(fp);
	  return pCur_Txt;
}

void destory_txt(pTXT pTxt)
{
     int index;
	 for(index=0;index<pTxt->line_num;index++)
	 {
	   free(pTxt->src_txt[index]);
	   pTxt->src_txt[index]=NULL;
	   free(pTxt->des_txt[index]);
	   pTxt->des_txt[index]=NULL;
	 }
}

void kmp_next(char *par, int*next)
{
     int par_len =strlen(par);
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
		}else
		{
		  j=next[j];
		}
	 }
}

int kmp_search(char *src,char*par)
{
     int i,j;
	 int src_len=strlen(src);
	 int par_len=strlen(par);
	 int *next=(int *)malloc(strlen(par)*4);
	 memset(next, 0, strlen(par)*4);
	 kmp_next(par, next);
	 i=0;
	 j=0;
     while(i<src_len&&j<par_len)
	 {
	     if(j==-1||src[i]==par[j])
		 {
		    i++;
		    j++;
		 }else
		 {
		   j=next[j];
		 }
	 }
	 free(next);
	 if(j>=par_len)
	 {
	    return 1;
	 }else
	 {
	    return 0;
	 }
}
