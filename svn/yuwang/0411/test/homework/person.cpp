/*************************************************************************
	> File Name: person.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 11 Apr 2014 12:36:47 PM CST
 ************************************************************************/

#include"person.h"

Person &Person::set_name(const std::string &name)
{
   _name=name;
   return *this;
}
Person &Person::show()
{
	std::cout << _name <<std::endl;
  return *this;
}
