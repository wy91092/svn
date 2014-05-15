/*************************************************************************
	> File Name: 1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 22 Apr 2014 08:10:21 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	void print()
	{
	  cout<<"id: "<<_id<<" name: "<<_name<<" age: "<<_age<<endl;
	}
	void set_info(int id,const string &name, size_t age)
	{
	  _id=id;
	  _name=name;
	  _age=age;
	}
private:
	int _id;
	std::string _name;
	size_t _age;
};
class Student:public Person
{
	public:
   void print()
   {
     cout<<"school: "<<_school<<endl;
   }
   void set_school(const string &school)
   {
     _school=school;
   }
   int _a;
	private:
   string _school;
};
class Worker:public Person
{
	public:
		void print()
		{
		  cout<<"factory: "<<_factory<<endl;
		}
		void set_factory(const string &factory)
		{
		  _factory=factory;
		}
	private:
		string _factory;
};

int main()
{
   Student s;
   s.set_info(23,"lisi",22);
   s.set_school("test");

   Worker w;
   w.set_info(45, "zhangha", 44);
   w.set_factory("hehe");

   Person *p_a;
   p_a=&s;
   p_a->print();  //person

   Person &ref=w;
   ref.set_info(44,"jack",56);
   ref.print();
}
