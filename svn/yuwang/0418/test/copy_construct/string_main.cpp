/*************************************************************************
	> File Name: string_main.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 18 Apr 2014 02:13:47 PM CST
 ************************************************************************/

#include"string.h"
using namespace _str;
int main()
{
  String s1;
  s1.debug();
  String s2(s1);
  s2.debug();
  String s3;
  s3=s1;
  s3.debug();
}
