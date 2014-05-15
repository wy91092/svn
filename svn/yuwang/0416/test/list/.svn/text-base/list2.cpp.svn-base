/*************************************************************************
	> File Name: list2.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 12:50:18 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
    vector<string> vec;
	vec.push_back("aa");
	vec.push_back("bb");
	vec.push_back("cc");
	vec.push_back("dd");
	vec.push_back("ee");
	vec.push_back("ff");
	vec.push_back("gg");
	vec.push_back("hh");
	vec.push_back("ii");
    
	vector<string>::iterator first=std::find(vec.begin(),vec.end(),string("cc"));
	vector<string>::iterator last=std::find(vec.begin(),vec.end(),string("gg"));
    while(first!=last)
	{
	  cout<<*first <<endl;
	  ++first;
	}
    cout<<"------------------" <<endl;

	vector<string>::reverse_iterator iter=vec.rbegin();
	for(;iter!=vec.rend();++iter)
	{
	  cout<<*iter<<endl;
	}
}
