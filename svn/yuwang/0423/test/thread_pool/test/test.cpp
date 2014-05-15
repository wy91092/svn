/*************************************************************************
	> File Name: test.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 23 Apr 2014 09:12:48 PM CST
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include"threadpool.h"
using namespace std;
int main()
{
  ThreadPool pool(5);
  pool.start_thread_pool();
  srand(1024);
  while(1)
  {
    Task tmp;
	tmp._num=rand()%100;
    pool.add_task_queue(tmp);
    sleep(1);
  }
    return 0;
}
