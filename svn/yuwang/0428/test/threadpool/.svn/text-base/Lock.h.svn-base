/*************************************************************************
	> File Name: Lock.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 02:55:23 PM CST
 ************************************************************************/

#ifndef _LOCK_H_
#define _LOCK_H_
#include<pthread.h>
class Cond;
class Lock
{
  friend class Cond;
  private:
	  pthread_mutex_t _lock;
  public:
	  Lock();
	  ~Lock();
      void lock();
	  void unlock();
};

#endif
