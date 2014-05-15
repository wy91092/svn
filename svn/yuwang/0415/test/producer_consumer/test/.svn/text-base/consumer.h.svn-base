/*************************************************************************
  > File Name: consumer.h
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Tue 15 Apr 2014 02:29:43 PM CST
 ************************************************************************/

#ifndef _CONSUMER_H_
#define _CONSUMER_H_
#include<pthread.h>
#include"queue.h"
class Consumer
{
	private:
		pthread_t _tid;
		Queue *_p_queue;
	public:
		Consumer(Queue *p_queue);
		virtual ~Consumer();
		void start();
		static void *thread_func(void *arg);
		void run();
		void join();
};
#endif
