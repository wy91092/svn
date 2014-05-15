/*************************************************************************
	> File Name: Cond.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 03:08:46 PM CST
 ************************************************************************/

#ifndef _COND_H_
#define _COND_H_
#include<pthread.h>
#include<iostream>
#include"Lock.h"
class Lock;
class Cond
{
  private:
	  pthread_cond_t _cond;
	  Lock *_p_lock;
  public:
	  Cond(Lock *p_lock);
	  ~Cond();
	  void wait();
      void signal();
      void broadcast();
}; 


#endif
