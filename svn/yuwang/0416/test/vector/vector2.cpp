/*************************************************************************
	> File Name: vector2.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 11:30:07 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(int argc, char **argv)
{
   std::vector<std::string> vec;
   vec.push_back("hello");
   vec.push_back("hehe");
   vec.push_back("haha");
   std::vector<std::string> vec2(5);   //default
   for(std::vector<std::string>::const_iterator iter=vec2.begin();iter!=vec2.end();++iter)
   {
     cout <<*iter<<endl;
   }

   std::vector<std::string> vec3(10,"test");
   for(std::vector<std::string>::const_iterator iter=vec3.begin();iter!=vec3.end();++iter)
   {
     cout <<*iter<<endl;
   }
   
   return 0;

}

