/*************************************************************************
	> File Name: ThreadPool.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 03:42:28 PM CST
 ************************************************************************/
#include"ThreadPool.h"
#include<iostream>
using namespace std;
ThreadPool::ThreadPool(std::vector<WorkThread>::size_type max_thread):_task_queue(),_max_thread(max_thread),_work_thread(_max_thread),_is_start(false),_lock(),_cond(&_lock)
{
  std::vector<WorkThread>::iterator iter=_work_thread.begin();
  for(;iter!=_work_thread.end();++iter)
  {
    iter->register_thread_pool(this);
  }
}

ThreadPool::~ThreadPool()
{
  stop_thread_pool();
}

bool ThreadPool::add_task(Task task)
{
  _lock.lock();
  bool ret=false;
  if(_is_start)
  {  
  _task_queue.push(task);
  _cond.signal();
  ret=true;
  }
  _lock.unlock();
  return ret;
}

bool ThreadPool::get_task(Task &task)
{
  _lock.lock();
  while(_is_start&&_task_queue.empty())
  {
    _cond.wait();
  }
  if(_is_start==false)
  {
   _lock.unlock();
   return  false;
  }
 // is_start=true;
  task=_task_queue.front();
  _task_queue.pop();
   _lock.unlock();
  return true;
}

void ThreadPool::start_thread_pool()
{
	if(_is_start==false)
	{
	 _is_start=true;
     std::vector<WorkThread>::iterator iter=_work_thread.begin();
     for(;iter!=_work_thread.end();++iter)
     {
      iter->start();
     }
    }
}
void ThreadPool::stop_thread_pool()
{
   if(_is_start==false)
   {
     return ;
   }
   _is_start=false;
   _cond.broadcast();
  std::vector<WorkThread>::iterator iter=_work_thread.begin();
  for(;iter!=_work_thread.end();++iter)
  {
    iter->join();
  }
   while(!is_task_queue_empty())
   {
     _task_queue.pop();
   }
}

bool ThreadPool::is_task_queue_empty() const
{
	_lock.lock();
	bool ret=_task_queue.empty();
	_lock.unlock();
	return ret;
}

std::queue<Task>::size_type ThreadPool::get_task_queue_size() const
{
	_lock.lock();
	std::queue<Task>::size_type ret= _task_queue.size();
	_lock.unlock();
	return ret;
}

