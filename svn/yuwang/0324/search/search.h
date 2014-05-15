/*************************************************************************
	> File Name: search.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 24 Mar 2014 09:32:39 PM CST
 ************************************************************************/

#ifndef _SEARCH_H_
#define _SEARCH_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
void show_line(char *file_name);
void init(char *line);
void kmp_next(char *par, int *next);
int kmp_search(char *src, char *par);
int show_word(char *line);

#endif
