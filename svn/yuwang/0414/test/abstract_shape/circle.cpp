/*************************************************************************
	> File Name: circle.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 06:37:42 PM CST
 ************************************************************************/

#include"circle.h"
using std::cout;
using std::endl;
Circle::Circle(int a, int b, double r):Point(a, b){SetRadius(r);}
void Circle::SetRadius( double r) 
{
  radius=(r>=0 ?r :0);
}
double Circle::GetRadius() const {return radius;}
double Circle::Area() const
{
  return 3.14159*radius*radius;
}
void Circle::Print() const
{
  cout <<"Center =";
  Point::Print();
  cout <<"; Radius= " <<radius <<endl;
}
