/*************************************************************************
	> File Name: main.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sat 12 Apr 2014 09:40:38 PM CST
 ************************************************************************/

#include"inherit.h"
int main()
{
  Student stu;
  stu.RegisterStu("信管1002",505,"完治", 23,'m');
  stu.ShowStu();
  stu.ShowMe();
  return 0;
}
