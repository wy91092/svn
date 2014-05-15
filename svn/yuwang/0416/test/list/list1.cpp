/*************************************************************************
  > File Name: list1.cpp
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Wed 16 Apr 2014 11:58:44 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;


int main(int argc, char* argv[])
{
	std::vector<int> vec;
	for(size_t ix=0;ix!=10;++ix)
	{
		vec.push_back(ix);
	}

	list<double> list1(vec.begin(),vec.end());
	list<double>::iterator iter=list1.begin();
	for(;iter!=list1.end();++iter)
	{
		cout << *iter <<" ";
	}
	cout <<endl;
	return 0;
}
