/*************************************************************************
	> File Name: Lock.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 02:58:54 PM CST
 ************************************************************************/
#include"Lock.h"
Lock::Lock()
{
  pthread_mutex_init(&_lock,NULL);
}
Lock::~Lock()
{
  pthread_mutex_destroy(&_lock);
}
void Lock::lock()
{
  pthread_mutex_lock(&_lock);
}
void Lock::unlock()
{
  pthread_mutex_unlock(&_lock);
}
