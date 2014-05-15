/*************************************************************************
	> File Name: typename.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 03:42:08 PM CST
 ************************************************************************/

#include<iostream>
#include<typeinfo>
#include<map>
#include<string>
using namespace std;

int main()
{
   map<string,int> people;
   cout<<typeid(people).name()<<endl;
   pair<string, int> p1;
   cout<<typeid(p1).name()<<endl;

}
