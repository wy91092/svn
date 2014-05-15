/*************************************************************************
	> File Name: singleton.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 24 Apr 2014 02:30:26 PM CST
 ************************************************************************/

#include"singleton.h"
#include<cstddef>
#include<unistd.h>
Singleton *Singleton::_p_instance=NULL;
Lock Singleton::_lock;
Singleton *Singleton::get_instance()
{
  if(_p_instance==NULL)
  {
    _lock.lock();
	if(_p_instance==NULL)
	{
	  _p_instance=new Singleton;
	}
    _lock.unlock();
  }
  return _p_instance;
}
