/*************************************************************************
	> File Name: singleton.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 24 Apr 2014 02:25:59 PM CST
 ************************************************************************/

#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include"lock.h"
class Singleton
{
public:
	static Singleton *get_instance();
private:
	Singleton(){}
    static Singleton *_p_instance;
    static Lock _lock;
};
#endif 
