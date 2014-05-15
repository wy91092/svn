/*************************************************************************
	> File Name: point.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 06:25:02 PM CST
 ************************************************************************/

#ifndef _POINT_H_
#define _POINT_H_
#include"shape.h"
using std::cout;
class Point:public Shape
{
    int x,y;
	public:
	Point(int =0, int =0);
	void SetPoint(int ,int);
	int GetX() {return x;}
	int GetY() {return y;}
	virtual void PrintShapeName() const {cout <<"Point: ";}
    virtual void Print() const;
};




#endif
