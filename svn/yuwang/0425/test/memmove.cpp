/*************************************************************************
	> File Name: memmove.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 25 Apr 2014 10:23:26 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
  char str[]="memmove can be very useful.......";
  char str1[]="hehe";
  memmove(str, str1, 2);
  puts(str);
  return 0;
}

