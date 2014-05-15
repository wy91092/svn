/*************************************************************************
	> File Name: rectangle.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 06:48:08 PM CST
 ************************************************************************/

#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
#include<iostream>
#include"point.h"
using std::cout;
using std::endl;
class Rectangle: public Point
{
  double length,width;
  public:
  Rectangle(int x=0, int y=0, double l=0.0, double w=0.0);
  void SetLength(double);
  void SetWidth(double);
  double GetLength() const;
  double GetWidth() const;
  virtual double Area() const;
  virtual void Print() const;
  virtual void PrintShapeName() const {cout <<"Rectangle: ";}
};




#endif
