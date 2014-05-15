/*************************************************************************
  > File Name: WorkThread.cpp
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Mon 28 Apr 2014 02:41:14 PM CST
 ************************************************************************/
#include"ThreadPool.h"
#include<iostream>
using namespace std;
void WorkThread::run()
{
	while(true)
	{
		Task task;
		bool ret=_p_thread_pool->get_task(task);
		if(ret==false)
		{
			return;
		}
		handle_task(task._num);
	}

}
void WorkThread::handle_task(int num)
{
	std::cout<<2*num<<std::endl;
}
void WorkThread::register_thread_pool(ThreadPool *p_thread_pool)
{
	_p_thread_pool=p_thread_pool;
}
