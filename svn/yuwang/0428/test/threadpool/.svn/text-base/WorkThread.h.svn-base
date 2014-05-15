/*************************************************************************
	> File Name: WorkThread.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 02:36:11 PM CST
 ************************************************************************/
#ifndef _WORKTHREAD_H_
#define _WORKTHREAD_H_

#include<pthread.h>
#include"Thread.h"
class ThreadPool;

class WorkThread:public Thread
{
  private:
   // pthread_t _tid;
	ThreadPool *_p_thread_pool;
  public:
	void run();
    void handle_task(int);
	void register_thread_pool(ThreadPool *p_thread_pool);

};
#endif
