/*************************************************************************
  > File Name: vector1.cpp
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Wed 16 Apr 2014 10:46:44 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	std::vector<int> vec;
	for(size_t ix=0;ix!=10;++ix)
	{
		vec.push_back(ix);
	} 
	for(std::vector<int>::iterator iter=vec.begin();iter!=vec.end();++iter)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	cout<<"------------------"<<endl;

	std::vector<int> vec2(vec);
	for(std::vector<int>::iterator iter=vec2.begin();iter!=vec2.end();++iter)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	cout<<"------------------"<<endl;

	std::vector<int> vec3(vec.begin(),vec.end());
	for(std::vector<int>::iterator iter=vec3.begin();iter!=vec3.end();++iter)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	cout<<"------------------"<<endl;

	std::vector<int>::iterator iter=vec.begin();
	++iter;
	++iter;
	std::vector<int> vec4(iter,vec.end());
	for(std::vector<int>::iterator iter=vec4.begin();iter!=vec4.end();++iter)
	{
		cout<<*iter<<" ";
	}
	return 0;
}
