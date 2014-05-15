/*************************************************************************
	> File Name: 1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 09:39:30 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
   string s1="fucking perfect";
   cout <<s1<<endl;
   string s2(5,'h');
   cout <<s2<<endl;
   string s3(s2);
   cout <<s3<<endl;
   string s4(s3.begin(),s3.begin()+s3.size()/2);
   cout <<s4<<endl;
   string s5(s1,2);
   cout <<s5<<endl;
   string s6(s1,0,2);
   cout <<s6<<endl;
   string s7(s1,5,8);
   cout <<s7<<endl;

}

