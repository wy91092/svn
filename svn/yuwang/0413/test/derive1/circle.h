/*************************************************************************
	> File Name: circle.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 13 Apr 2014 02:32:14 PM CST
 ************************************************************************/

#ifndef _CIRCLE_H_
#define _CIRCLE_H_
#include"point.h"
class Circle : public Point
{
  double radius;
	public:
  Circle(int x=0, int y=0, double r=0.0);
  void SetRadius(double);
  double GetRadius();
  double Area();
  void Print();
};
#endif
