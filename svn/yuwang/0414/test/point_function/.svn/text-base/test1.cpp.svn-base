/*************************************************************************
	> File Name: test1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 11:12:23 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class Person
{
   int _id;
	public:
   void test();
   static void test1(){ cout << "test1" <<endl;}
};
void Person::test()
{
  cout <<"test"<<endl;
}
/*static void  Person::test1()
{
  cout <<"test1"<<endl;
}*/

int main()
{
   void (*p)();
   p=Person::test;
   return 0;
}
