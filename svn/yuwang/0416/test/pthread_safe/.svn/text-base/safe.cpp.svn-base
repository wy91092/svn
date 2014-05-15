/*************************************************************************
	> File Name: unsafe.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 11:05:20 AM CST
 ************************************************************************/

#include<pthread.h>
#include<iostream>
#include<unistd.h>
#include<vector>
using namespace std;
int num=0;
pthread_mutex_t mutex;
void * func(void *arg)
{
	pthread_mutex_lock(&mutex);
	int tmp=num;
	pthread_t tid =pthread_self();
	cout << "in thread "<<tid<<" the num is: "<<num <<endl;
	++tmp;
	sleep(1);
    num=tmp;
    cout <<"after plusing in thread "<<tid<<" the num is : "<<num <<endl;
    pthread_mutex_unlock(&mutex);
	return NULL;
}
int main()
{
   vector<pthread_t> tids(10);
   pthread_mutex_init(&mutex,NULL);
   vector<pthread_t>::iterator iter=tids.begin();
   for(;iter!=tids.end();++iter)
   {  
      pthread_create(&(*iter),NULL,func,NULL);
   
   }
   for(iter=tids.begin();iter!=tids.end();++iter)
   {
     pthread_join(*iter,NULL);
   }
   pthread_mutex_destroy(&mutex);
  return 0;
}
