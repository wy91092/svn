/*************************************************************************
	> File Name: derive.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 13 Apr 2014 03:09:38 PM CST
 ************************************************************************/

#ifndef _DERIVE_H
#define _DERIVE_H_
#include"base1.h"
#include"base2.h"
class Derive: public Base1, public Base2
{
  double real;
	public:
  Derive(int ,char , double );
  double getReal() const;
  void Output();

};

#endif
