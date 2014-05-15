/*************************************************************************
	> File Name: vector.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 10 Apr 2014 02:34:06 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main()
{
    vector<string> vec1,vec2;
	std::ifstream is;
	is.open("in.txt");
	string line;
	string word;
	while(std::getline(is ,line))
	{
	   vec1.push_back(line);
	}
	
	is.clear();
	is.close();
	is.open("in.txt");
    while(is>>word)
	{
	   vec2.push_back(word);
	}

	vector<string>::iterator iter1=vec1.begin();
	for(;iter1!=vec1.end();++iter1)
	{
	  cout<<*iter1<<endl;
	}
	cout<<endl;
	vector<string>::iterator iter2=vec2.begin();
	for(;iter2!=vec2.end();++iter2)
	{
	  cout<<*iter2<<endl;
	}
    is.close();
	is.clear();
	return 0;

}
