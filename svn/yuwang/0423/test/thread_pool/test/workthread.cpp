/*************************************************************************
	> File Name: workthread.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 23 Apr 2014 05:08:03 PM CST
 ************************************************************************/
#include"threadpool.h"
#include<iostream>
using namespace std;
void WorkThread::compute_task(int num)
{
  cout<<num*2<<endl;
}
void WorkThread::run()
{
   while(true)
   {
     Task task;
	 bool ret=_p_thread_pool->get_task_queue(task);
     if(ret==false)
	 {
	   return ;
	 }
	 compute_task(task._num);
   }

}
void WorkThread::register_thread_pool(ThreadPool *p_thread_pool)
{
  _p_thread_pool=p_thread_pool;
}

