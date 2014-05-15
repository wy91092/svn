/*************************************************************************
	> File Name: 3.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 11:28:01 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="helloworld";

	cout <<s.substr(5, 3)<<endl;
	s.append("hello");
	cout <<s<<endl;

	s.append("hello",3); //hel
	cout<<s<<endl; 

	s.append(string("world"));
	cout <<s <<endl;

	s.append(string("foobar"), 3, 3);  //bar
	cout <<s <<endl;

	s.append(8, 's');  //8 s
	cout <<s <<endl;

	string tmp="zhangsan";
	string::iterator it1=find(tmp.begin(),tmp.end(),'h');
	string::iterator it2=find(tmp.begin(),tmp.end(),'g');
 
	s.append(it1,it2); //han
	cout <<s <<endl;


}
