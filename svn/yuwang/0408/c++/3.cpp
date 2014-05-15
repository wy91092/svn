/*************************************************************************
	> File Name: 3.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 08 Apr 2014 02:38:34 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
int main(int argc, char *argv[])
{
   std::string vec="hello world";
   std::string::iterator iter=vec.begin();
   for(;iter!=vec.end();++iter)
   {
	   std::cout<<*iter;
   }
   std::cout <<std::endl;
   return 0;
}
