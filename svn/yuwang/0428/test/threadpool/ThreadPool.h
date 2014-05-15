/*************************************************************************
	> File Name: ThreadPool.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 03:22:57 PM CST
 ************************************************************************/
#ifndef _THREADPOOL_H_
#define _THREADPOOL_H_
#include<queue>
#include<vector>
#include"Lock.h"
#include"Cond.h"
#include"WorkThread.h"
struct Task
{
  int _num;  
};
class ThreadPool
{
   private:
	   std::queue<Task> _task_queue;
	   std::vector<WorkThread>::size_type _max_thread;
	   std::vector<WorkThread> _work_thread;
	   bool _is_start;
	   mutable Lock _lock;
	   mutable Cond _cond;
   public:
	 ThreadPool(std::vector<WorkThread>::size_type max_thread);
	 ~ThreadPool();

	 bool add_task(Task task);
	 bool get_task(Task &task);
     void start_thread_pool();
	 void stop_thread_pool();

	 bool is_task_queue_empty() const;
	 std::queue<Task>::size_type get_task_queue_size() const;
};

#endif

