/*************************************************************************
	> File Name: list.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 08 Apr 2014 11:03:09 AM CST
 ************************************************************************/

/*#include<iostream>
#include<string>
using namespace std;
int main()
{
  // int *a=(int *)malloc(sizeof(int)*5);
   int **p=(int **)malloc(sizeof(int *)*4);
   for(int ix=0;ix!=5;++ix)
   {
     p[ix]=(int *)malloc(sizeof(int)*5);
   }
   return 0;
}*/

#ifndef _LIST_H_
#define _LIST_H_

#include<stdlib.h>

struct Array
{
   int **p;
   int m; 
   int n;
   void init()
   {
    p=(int **)malloc(sizeof(int *)*4);
    for(int ix=0; ix!=5; ++ix)
    {
     p[ix]=(int *)malloc(sizeof(int)*5);
    }
   }
   
   void destroy()
   {
     for(int ix=0; ix!=5; ++ix)
	 {
	    free(p[ix]);
	 }
     free(p);
   }
}
#endif
