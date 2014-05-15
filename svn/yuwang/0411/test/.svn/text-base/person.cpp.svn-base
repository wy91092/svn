/*************************************************************************
	> File Name: person.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 11 Apr 2014 10:12:55 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
class Person
{
   private:
	   string _name;
	   string _address;
   public:
	   Person()
	   {
	      _name="none";
	      _address="nothing";
	   }
	   Person(const string &name,const string &address)
	   {
	     _name=name;
	     _address=address;
	   }
       void set_name(const string &name)
	   {
	      _name=name;
	   }
       void set_address(const string &address)
	   {
	      _address=address;
	   }
       string get_name()const
	   {
	     return _name;
	   }
       string get_address()const
	   {
	     return _address;
	   }
};
int main()
{
    Person p;
	cout << p.get_name() <<" "<<p.get_address() <<endl;
	p.set_name("heqing");
	p.set_address("beijing");
	cout << p.get_name() <<" "<<p.get_address() <<endl;
    Person p2("cunge", "wuhan");
	cout << p2.get_name() <<" "<<p2.get_address() <<endl;
}
