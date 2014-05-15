/*************************************************************************
	> File Name: fstream.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 10 Apr 2014 01:33:19 PM CST
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
	std::ifstream is;
    vector<string> vec;
    is.open("in.txt");
	string s;
	while(is >> s)
	{
	   vec.push_back(s);
	}
/*	typedef string::size_type string_size;
	string_size i=0;
	while(i!=s.size())
	{
	   while(i!=s.size()&& isspace(s[i]))
		   ++i;
	   string_size j=i;
	   while(j!=s.size()&& !isspace(s[j]))
		   ++j;
	   if(i!=j)
	   {
	      vec.push_back(s.substr(i,j-i));
	   }
	}*/
	vector<string>::iterator iter=vec.begin();
	for(; iter!=vec.end();++iter)
	{
	   cout << *iter <<" ";
	}
    cout <<endl;
    is.close();
	is.clear();
	return 0;
}
