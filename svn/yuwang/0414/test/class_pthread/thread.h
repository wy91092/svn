/*************************************************************************
	> File Name: thread.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 01:36:33 PM CST
 ************************************************************************/

#ifndef _THREAD_H_
#define _THREAD_H_
#include<pthread.h>
#include<unistd.h>
#include<iostream>
class Thread
{
 private:
	pthread_t _tid; 
    int _num;
	static void *thread_func(void*arg);
	void run();
 public:
    Thread(int );
	~Thread();

    void start();
    void join();
};
#endif
