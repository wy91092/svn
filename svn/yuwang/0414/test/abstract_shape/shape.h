/*************************************************************************
	> File Name: shape.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 06:15:19 PM CST
 ************************************************************************/

#ifndef _SHAPE_H_
#define _SHAPE_H_
#include<iostream>
class Shape
{
	public:
		virtual double Area() const { return 0.0;}
		virtual void PrintShapeName() const =0;
		virtual void Print() const=0;
};
#endif
