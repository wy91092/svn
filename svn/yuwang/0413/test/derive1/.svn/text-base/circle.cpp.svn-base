/*************************************************************************
	> File Name: circle.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 13 Apr 2014 02:35:42 PM CST
 ************************************************************************/

#include<iostream>
#include"circle.h"
using std::cout;
using std::endl;
Circle::Circle(int a, int b, double r):Point(a,b)
{
  SetRadius(r);
} 
void Circle::SetRadius(double r)
{
  radius= (r >=0 ?r:0);
}
double Circle::GetRadius()
{
  return radius;
}
double Circle::Area()
{
   return 3.1415926*radius*radius;
}
void Circle::Print()
{
  cout << "Center = ";
  Point::Print();
  cout << " ; Radius= "<<radius <<endl;
}
