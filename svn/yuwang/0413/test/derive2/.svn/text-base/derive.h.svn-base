/*************************************************************************
	> File Name: derive.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 13 Apr 2014 11:07:43 AM CST
 ************************************************************************/

#ifndef _DERIVE_H_
#define _DERIVE_H_
#include<iostream>
using std::string;
using std::cout;
using std::endl;
class Person
{
   string Name;
   int Age;
	public:
   Person(string name, int age)
   {
      Name=name;
	  Age=age;
	  cout << "constructor of person" << Name <<endl;
   }
   ~Person()
   {
     cout << "deconstructor of person" << Name <<endl;
   }
};
class Student :public Person
{
  string ClassName;
  Person Monitor;
	public:
  Student(string name, int age, string classname, string name1, int age1):Person(name, age),Monitor(name1, age1)
   {
     ClassName=classname;
	 cout <<"constructor of student " <<endl;
   }
  ~Student()
  {
    cout <<"deconstructor of student" <<endl;
  }
};



#endif
