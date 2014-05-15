/*************************************************************************
	> File Name: test.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 18 Apr 2014 02:22:25 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Test
{
  private:
	  void operator=(const Test &);

};
int main()
{
  Test t1;
  Test t2;
  t1=t2;

}
