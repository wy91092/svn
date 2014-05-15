/*************************************************************************
	> File Name: fork.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 28 Mar 2014 10:17:57 AM CST
 ************************************************************************/

#ifndef _FORK_H_
#define _FORK_H_
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>
#include<stdlib.h>

#define MAX_LINE 128
void trim_space(char *src);
int sum_express(char *express);
#endif
