/*************************************************************************
	> File Name: point.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 13 Apr 2014 02:26:55 PM CST
 ************************************************************************/

#ifndef _POINT_H_
#define _POINT_H_
class Point
{
  int x,y;
	public:
  Point(int =0, int =0);
  void SetPoint(int , int);
  int GetX() { return x;}
  int GetY() { return y;}
  void Print();
};

#endif
