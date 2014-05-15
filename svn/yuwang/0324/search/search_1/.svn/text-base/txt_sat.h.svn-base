/*************************************************************************
	> File Name: txt_sat.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 26 Mar 2014 05:01:18 PM CST
 ************************************************************************/
#ifndef _TXT_SAT_H_
#define _TXT_SAT_H_
#define MAX_LINE_LEN (1<<10)
#define MAX_TXT_LINE (1<<15)
#define MAX_WORD_LINE 32
#define MAX_WORD_LEN (1<<23)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct tagw
{
    char word[32];
	int count;
}TXT_WORD,*pTXT_WORD;

typedef struct tag
{
    int word_e_num;
	int char_num;
	int word_num;
	int line_num;
    pTXT_WORD des_word;
	char *src_txt[MAX_TXT_LINE];
	char *des_txt[MAX_TXT_LINE];
}TXT,*pTXT;
pTXT init_txt(char *file_name);
void destory_txt(pTXT pTxt);
void trim_space(char *src);
int is_space(char ch);
int num_word_line(char *src);
int num_char_line(char *src);
void kmp_next(char *par, int *next);
int kmp_search(char *src, char *par);
#endif

