/*************************************************************************
	> File Name: main.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 13 Apr 2014 03:15:50 PM CST
 ************************************************************************/

#include<iostream>
#include"base1.h"
#include"base2.h"
#include"derive.h"
using std::endl;
using std::cout;
int main()
{
  Base1 b1(10), *base1Ptr=0;
  Base2 b2('Z'), *base2Ptr=0;
  Derive d(7,'A', 3.5);
  //对象输出各自的数据成员
  cout <<"Object b1 contains integer"<<b1.getData();
  cout<<"\nObject b2 contains integer"<<b2.getData()<<"\nObject d contains:\n";
  d.Output();
  //派生类对象对基类成员函数的访问
  cout<<"Data menbers og Derive can be" <<"accessed individually:";
  cout<<"\nInteger: "<<d.Base1::getData()<<endl;
  cout<<"Character: "<<d.Base2::getData()<<endl;
  cout<<"Real number: "<<d.getReal() <<endl;
  cout<<"Derive can be treated as an"<<"object of either base class:\n";
  //派生类对象作为Base1对象
  base1Ptr=&d;
  cout <<"base1Ptr->getData() yields"<<base1Ptr->getData()<<endl;
  //派生类对象作为Base2对象
  base2Ptr=&d;
  cout <<"base2Ptr->getData() yields"<<base2Ptr->getData()<<endl;
  return 0;
}
