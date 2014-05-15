/*************************************************************************
	> File Name: threadpool.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 23 Apr 2014 05:34:02 PM CST
 ************************************************************************/
#include"threadpool.h"

ThreadPool::ThreadPool(std::vector<WorkThread>::size_type max_thread):_task_queue(),_max_thread(max_thread),_thread_vector(_max_thread),_is_started(false),_lock(),_cond(&_lock)
{
   std::vector<WorkThread>::iterator iter=_thread_vector.begin();
   for(;iter!=_thread_vector.end();++iter)
   {
     iter->register_thread_pool(this);
   }
}
ThreadPool::~ThreadPool()
{
 stop_thread_pool();
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
	std::queue<Task>::size_type ret=_task_queue.size();
    _lock.unlock();
	return ret;
}

bool ThreadPool::add_task_queue(Task task)
{
   _lock.lock();
   bool ret=false;
   if(_is_started)
   {
     _task_queue.push(task);
     _cond.signal();
	 ret=true;
   }
   _lock.unlock();
   return ret;
}

void ThreadPool::start_thread_pool()
{
    if(_is_started==false)
	{
	  _is_started=true;
	  std::vector<WorkThread>::iterator iter=_thread_vector.begin();
	  for(;iter!=_thread_vector.end();++iter)
	  {
	    iter->start();
	  } 
	}
}

void ThreadPool::stop_thread_pool()
{
    if(_is_started==false)
	{
	 return;
	}
	_is_started=false;
	_cond.broadcast();
    std::vector<WorkThread>::iterator iter=_thread_vector.begin();
	for(;iter!=_thread_vector.end();++iter)
	{
	  iter->join();
	}
    while(!_task_queue.empty())
	{
	 _task_queue.pop();
	}
}

bool ThreadPool::get_task_queue(Task &task)
{
   _lock.lock();
   while(_is_started&&_task_queue.empty())
   {
     _cond.wait();
   }
   if(_is_started==false)
   {
	   _lock.unlock();
      return false;
   }
   task=_task_queue.front();
   _task_queue.pop();
   _lock.unlock();
   return true;
}
