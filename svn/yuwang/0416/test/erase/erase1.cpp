/*************************************************************************
	> File Name: erase1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 03:42:19 PM CST
 ************************************************************************/

#include"test.h"
using namespace std;

void print(const std::string &s)
{
   cout << s <<" ";
}
int main(int argc, char *argv[])
{
   vector<string> vec;
   vec.push_back("hello");
   vec.push_back("world");
   vec.push_back("hehe");
   vec.push_back("haha");
   vec.push_back("wuhan");
   vec.push_back("honghu");

   vector<string>::iterator iter=std::find(vec.begin(),vec.end(),string("haha"));
   if(iter!=vec.end())
   {
     vec.erase(iter);
   }
   for_each(vec.begin(),vec.end(),print);
   cout <<endl;

   vector<string>::iterator first=find(vec.begin(),vec.end(),"world");
   vector<string>::iterator last=find(vec.begin(),vec.end(),"honghu");

   if(first!=vec.end())
   {
     vec.erase(first, last);
   }
   for_each(vec.begin(),vec.end(),print);
   cout <<endl;
  
   vec.clear();
   for_each(vec.begin(),vec.end(),print);
   cout <<endl;

}
