/*************************************************************************
	> File Name: main.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 02:46:18 PM CST
 ************************************************************************/

#include"ThreadPool.h"
#include<stdlib.h>
#include<unistd.h>
#include<iostream>
using namespace std;
int main()
{
  ThreadPool pool(10);
	pool.start_thread_pool();
  srand(1024);
  while(true)
  {
    Task task;
	int num=rand()%100;
	task._num=num;
	pool.add_task(task);
	sleep(1);
  }
  pool.stop_thread_pool();
  return 0;
}

