/*************************************************************************
	> File Name: rectangle.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 06:52:42 PM CST
 ************************************************************************/

#include"rectangle.h"
Rectangle::Rectangle(int a, int b, double l, double w):Point(a,b)
{
   SetLength(l);
   SetWidth(w);
}
void Rectangle::SetLength(double l)
{
 length =(l>=0 ?l :0);
}
void Rectangle::SetWidth(double w)
{
 width=(w>=0 ?w :0);
}
double Rectangle::GetLength() const {return length;}
double Rectangle::GetWidth() const {return width;}
double Rectangle::Area() const
{
  return length *width;
}
void Rectangle::Print() const
{
  cout << "left top vertex = ";
  Point::Print();
  cout <<"; Length="<< length <<", Width ="<<width <<endl;
}
