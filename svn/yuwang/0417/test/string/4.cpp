/*************************************************************************
	> File Name: 4.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 11:33:30 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
  string s="helloworld";
  s.replace(4, 3, "test");//owo->test
  cout<<s<<endl;

  s.replace(4,3,string("foobar"), 3, 3);//tes->bar
  cout <<s <<endl;

}
