/*************************************************************************
	> File Name: main.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 18 Apr 2014 05:34:13 PM CST
 ************************************************************************/
#include"string.h"
#include<iostream>
using namespace _str;

int main()
{
   String s1("hello");
   s1.debug();
   String s2,s3,s4,s5;
   s2+=s1;
   s2.debug();
   s2>>s3;
   s3.debug();
   s4<<s3;
   s4.debug();
   s5=s3+s4;
   s5.debug();
   if(s1==s2) 
	   std::cout<<"they are the same"<<std::endl;
   else
	   std::cout<<"they are different"<<std::endl;
   if(s4!=s5) 
	   std::cout<<"they are different"<<std::endl;
   else
	   std::cout<<"they are the same"<<std::endl;
   std::cout<<s5[4]<<std::endl; 
}
