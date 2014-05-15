/*************************************************************************
	> File Name: template1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 06:58:30 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
template <class T>
class AnyType
{
  T x,y;
	public:
  AnyType(T a,T b):x(a),y(b){}
  T GetX(){return x;}
  T GetY(){return y;}
};
int main()
{
   AnyType <int> i(1,2);
   AnyType <double> d(1.5,2.7);
   AnyType <char> c('a','b');
   AnyType <string> s("Hello","template class");
   cout<<"int: "<<i.GetX()<<","<<i.GetY()<<endl;
   cout<<"couble: "<<d.GetX()<<","<<d.GetY()<<endl;
   cout<<"char: "<<c.GetX()<<","<<c.GetY()<<endl;
   cout<<"string: "<<s.GetX()<<","<<s.GetY()<<endl;
   return 0;
}
