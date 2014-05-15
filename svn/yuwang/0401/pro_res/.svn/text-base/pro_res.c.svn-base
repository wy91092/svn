/*************************************************************************
	> File Name: pro_res.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 01 Apr 2014 10:40:28 AM CST
 ************************************************************************/

#include<stdio.h>
#include<pthread.h>
int pro_num=0;
int left_num=20;
pthread_mutex_t mutex_pro, mutex_left;
pthread_cond_t cond_pro, cond_left;
void *thd1_handle(void *arg)
{
     while(1)
	 {
		 pthread_mutex_lock(&mutex_pro);
		 if(pro_num>0)
		 {
		    pthread_mutex_lock(&mutex_left);
		    pro_num--;
			if(pro_num==19)
			{
			   pthread_cond_signal(&cond_left);
			}
			left_num++;
			printf("thd1 consume 1,pro_num:%d,left_num:%d\n",pro_num,left_num);
			pthread_mutex_unlock(&mutex_left);
			pthread_mutex_unlock(&mutex_pro);
			sleep(2);
		 }else
		 {
		    pthread_cond_wait(&cond_pro, &mutex_pro);
		    pthread_mutex_unlock( &mutex_pro);
			sleep(2);
		 }
	 }
}
void *thd2_handle(void *arg)
{
     while(1)
	 {
		 pthread_mutex_lock(&mutex_pro);
		 if(pro_num>0)
		 {
		    pthread_mutex_lock(&mutex_left);
		    pro_num--;
			if(pro_num==19)
			{
			   pthread_cond_signal(&cond_left);
			}
			left_num++;
			printf("thd2 consume 1,pro_num:%d,left_num:%d\n",pro_num,left_num);
			pthread_mutex_unlock(&mutex_left);
			pthread_mutex_unlock(&mutex_pro);
			sleep(3);
		 }else
		 {
		    pthread_cond_wait(&cond_pro, &mutex_pro);
		    pthread_mutex_unlock( &mutex_pro);
			sleep(3);
		 }
	 }

}
int main()
{
   pthread_t thd1, thd2;

   pthread_mutex_init(&mutex_pro, NULL);
   pthread_mutex_init(&mutex_left, NULL);
  
   pthread_cond_init(&cond_pro, NULL);
   pthread_cond_init(&cond_left, NULL);
   
   pthread_create(&thd1, NULL, thd1_handle, NULL);
   pthread_create(&thd2, NULL, thd2_handle, NULL);

   sleep(3);
   while(1)
   {
        pthread_mutex_lock(&mutex_left);
        if(left_num>0)
		{
		   pthread_mutex_lock(&mutex_pro);
		   left_num--;
		   pro_num++;
		   printf("pro produce 1, pro_num:%d, left_num:%d\n",pro_num,left_num);
		   if(pro_num==1)
		   {
		      printf("action,come on \n");
			  pthread_mutex_unlock(&mutex_pro);
			  pthread_mutex_unlock(&mutex_left);
		      pthread_cond_broadcast(&cond_pro);
		   }else
		   {
		      pthread_mutex_unlock(&mutex_pro);
		      pthread_mutex_unlock(&mutex_left);
		   }
		   sleep(1);
		}else if(left_num<=0)
		{
		    pthread_cond_wait(&cond_left,&mutex_left);
		    pthread_mutex_unlock(&mutex_left);
		    sleep(1);
		}
   }
   return 0;
}
