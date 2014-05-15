/*************************************************************************
	> File Name: copy_inherit.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 23 Apr 2014 09:49:56 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class Person
{
   int _id;
   string _name;
public:
   Person(int id,const string &name):_id(id), _name(name){}
   Person(const Person &other):_id(other._id),_name(other._name){}
   Person &operator=(const Person &other)
   {
      if(this !=&other)
	  {
	    _id=other._id;
		_name=other._name;
	  }
	  return *this;
   }
   virtual ~Person(){}
   virtual void print()
   {
      cout<<"id: "<<_id<<" name: "<<_name<<endl;
   }
};
class Student:public Person
{
    string _school;
	public:
	Student(int id, const string &name, const string &school):Person(id,name),_school(school){}
    Student(const Student &other):Person(other),_school(other._school){}
	Student &operator=(const Student &other)
	{
	  if(this !=&other)
	  {
		  Person::operator=(other);
		  _school=other._school;
	  }
	  return *this;
	}
	
	void print()
	{
	 Person::print();
	 cout<<"school: "<<_school<<endl;
	}
};
class Worker:public Person
{
   string _factory;
	public:
   Worker(int id, const string &name, const string &factory):Person(id,name),_factory(factory){}
   void print()
   {
     Person::print();
	 cout<<"factory: "<<_factory<<endl;
   }

};
int main()
{
   Student s(501,"heqing","qingfeng");
   s.print();
   /*Worker w(502,"huangz","wangdao");
   w.print();*/
   Student s2(s);
   s2.print();
   Student s3(505, "feng", "yizhong");
   s3.print();
   s3=s2;
   s3.print();
}
