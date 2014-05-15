/*************************************************************************
  > File Name: function1.cpp
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Wed 16 Apr 2014 03:30:36 PM CST
 ************************************************************************/

#include"test.h"
using namespace std;
void print(const std::string &s)
{
	cout <<s <<" ";
}
int main(int argc, char *argv[])
{
	vector<string>  vec;
	vec.push_back("hello");
	vec.push_back("hello");
	vec.push_back("hello");
	vec.push_back("hello");
	vec.push_back("hello");
	vec.push_back("hello");

	cout << "size: " << vec.size() <<endl;
	cout << "max_size: " << vec.max_size() <<endl;
	cout <<vec.empty() <<endl;

	vec.resize(10);
	for_each(vec.begin(), vec.end(), print);
	cout <<"---------------"<<endl;

	vec.resize(15, "world");

	for_each(vec.begin(), vec.end(), print);
	cout <<"---------------"<<endl;
    return 0;
}
