/*************************************************************************
	> File Name: Cond.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 03:12:40 PM CST
 ************************************************************************/

#include"Cond.h"
Cond::Cond(Lock *p_lock):_p_lock(p_lock)
{
  pthread_cond_init(&_cond, NULL);
}

Cond::~Cond()
{
  pthread_cond_destroy(&_cond);
}

void Cond::wait()
{
  pthread_cond_wait(&_cond,&(_p_lock->_lock));
}
void Cond::signal()
{
  pthread_cond_signal(&_cond);
}
void Cond::broadcast()
{
  pthread_cond_broadcast(&_cond);
}
