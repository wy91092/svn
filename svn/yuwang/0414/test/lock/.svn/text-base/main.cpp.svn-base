/*************************************************************************
	> File Name: main.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 12:37:41 PM CST
 ************************************************************************/
#include<pthread.h>
#include<iostream>
#include"cond.h"
#include"lock.h"
using namespace std;
int main()
{
  Lock l;
  Cond c(&l);
  l.lock();
  c.wait();
  l.unlock();
  return 0;

}
