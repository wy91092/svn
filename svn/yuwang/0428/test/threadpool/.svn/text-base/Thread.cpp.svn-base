/*************************************************************************
	> File Name: Thread.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 02:26:51 PM CST
 ************************************************************************/
#include"Thread.h"
using namespace std;
Thread::Thread():_tid(0){}

Thread::~Thread()
{
}

void Thread::join()
{
  pthread_join(_tid,NULL);
}
void Thread::start()
{
  pthread_create(&_tid,NULL,fun, this);
}

void* Thread::fun(void*arg)
{
  Thread *p=(Thread*)(arg);
  p->run();
  return NULL;
}
