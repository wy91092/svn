/*************************************************************************
	> File Name: vector3.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 11:33:26 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student
{
   public:
	   Student(int id, const std::string &name):_id(id),_name(name){}
   private:
	   int _id;
	   std::string _name;
};
int main()
{
   std::vector<Student> vec(10,Student(0, "none"));

}
