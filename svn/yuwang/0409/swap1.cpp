/*************************************************************************
	> File Name: swap1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 09 Apr 2014 04:53:52 PM CST
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;
typedef int * INT;
void swap(INT &a, INT &b)
{
   INT temp=a;
       a=b;
	   b=temp;

}

int main()
{
  int num1=1,num2=2;
  int *p1=&num1,*p2=&num2;
  cout << "before:" <<endl;
  cout << "p1:" << p1 <<endl;
  cout << "p2:" << p2 <<endl;
  swap(p1,p2);
  cout << "after:" <<endl;
  cout << "p1:" << p1 <<endl;
  cout << "p2:" << p2 <<endl;
  return 0;

}
