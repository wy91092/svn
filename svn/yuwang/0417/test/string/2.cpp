/*************************************************************************
	> File Name: 2.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 10:13:28 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
   string s="helloworld";

   s.insert(2, 5, 's');
   cout<<s<<endl;

   s="helloworld";
   s.insert(4, "test");
   cout <<s <<endl;


   s="helloworld";
   s.insert(2, "test",3);
   cout <<s <<endl;


   s="helloworld";
   string _tmp="foobar";
   s.insert(5,_tmp,3,2);
   cout <<s <<endl;

   s="helloworld";
   string _tmp2="foobar";
   s.insert(0,_tmp2);
   cout <<s <<endl;

   string s2="helloworld";
   s2.erase(4, 5);

   cout << s2 <<endl;

}
