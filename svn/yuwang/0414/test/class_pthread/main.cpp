/*************************************************************************
	> File Name: main.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 01:48:51 PM CST
 ************************************************************************/

#include"thread.h"
using std::cout;
using std::endl;
int main()
{
  Thread thd(5);
  thd.start();
  for(size_t ix=0;ix!=5;++ix)
  {
	  sleep(1);
    cout << "he~ ~ he"<<endl;
  }
  thd.join();
  return 0;

}
