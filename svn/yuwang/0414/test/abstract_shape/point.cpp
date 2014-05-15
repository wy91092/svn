/*************************************************************************
	> File Name: point.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 06:28:28 PM CST
 ************************************************************************/

#include<iostream>
#include"point.h"
using namespace std;
Point::Point(int a, int b) { SetPoint(a, b);}
void Point::SetPoint(int a, int b) {x=a ; y=b;}
void Point::Print() const { cout << '[' <<x <<"," << y << ']'; }

