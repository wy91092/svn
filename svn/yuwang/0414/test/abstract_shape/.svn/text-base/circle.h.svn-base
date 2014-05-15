/*************************************************************************
	> File Name: circle.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 06:31:06 PM CST
 ************************************************************************/
#ifndef _CIRCLE_H_
#define _CIRCLE_H_
#include<iostream>
#include"point.h"
using std::cout;
class Circle: public Point
{
  double radius;
	public:
  Circle(int x=0, int y=0, double r=0.0);
  void SetRadius(double );
  double GetRadius() const;
  virtual double Area() const;
  virtual void Print() const;
  virtual void PrintShapeName() const { cout << "Circle: ";}
};
#endif
