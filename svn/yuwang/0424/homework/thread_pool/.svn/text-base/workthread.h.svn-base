/*************************************************************************
  > File Name: workthread.h
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Wed 23 Apr 2014 11:14:07 AM CST
 ************************************************************************/

#ifndef _WORKTHREAD_H_
#define _WORKTHREAD_H
#include<pthread.h>
#include"thread.h"
#include<stack>
#include<string>
#include<iostream>
class ThreadPool;

class WorkThread: public Thread
{
	public:
		void run();
		void compute_task(std::string expression);//实际的工作函数，由run来调用
		void register_thread_pool(ThreadPool *p_thread_pool);//注册线程池
		std::string getPostfixExp(std::string &infix);
		bool isOperator(char ch);
		int priority(char a);
		int postfixCalculate(std::string &postfix);
		void getTwoNums(std::stack<int> &num_stack, int &first, int &second);
	private:
		ThreadPool *_p_thread_pool;//线程池的指针，用来指定线程去哪里获取任务
};

#endif
