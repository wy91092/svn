/*************************************************************************
	> File Name: design.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 11 Apr 2014 02:47:14 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Test
{
  public:
	  static Test* get();
  private:
	  Test()
	  {
	  }

};
Test *Test::get()
{
   return new Test();
}
int main()
{
   Test *s1;
   cout<<&s1 <<endl;
   return 0;
}
