/*************************************************************************
	> File Name: Thread.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 02:24:06 PM CST
 ************************************************************************/

#ifndef _THREAD_H_
#define _THREAD_H_
#include<pthread.h>
#include<iostream>
class Thread
{
   private:
	   pthread_t _tid;
   public:
	   virtual void run()=0;
	   void start();
	   void join();
	   static void* fun(void *);
	   Thread();
       virtual ~Thread();
};

#endif
