/*************************************************************************
	> File Name: gdb1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 01:02:18 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

void dummy_function()
{
  unsigned char *ptr=0x00;
  *ptr=0x00;
}
int main()
{
  dummy_function();
  return 0;
}
