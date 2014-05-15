/*************************************************************************
	> File Name: erase2.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 03:49:16 PM CST
 ************************************************************************/

#include"test.h"
using namespace std;

void print(const std::string &s)
{
   cout << s <<" ";
}
int main(int argc,char* argv[])
{
    vector<string> vec;
	vec.push_back("hello");
	vec.push_back("world");
	vec.push_back("hehe");
	vec.push_back("haha");
	vec.push_back("wuhan");
	vec.push_back("honghu");
    
	vector<string>::iterator it=vec.begin();
	while(it !=vec.end())
	{
	   cout << *it <<endl;
	   it=vec.erase(it);
	}

	cout <<vec.size() <<endl;
}

