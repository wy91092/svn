/*************************************************************************
	> File Name: 1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 09 Apr 2014 10:59:01 AM CST
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;
struct Student
{
   int num;
   int score;
   string name;
   void init(int num, string name, int score)
   {
      this->num=num;
	  this->name=name;
	  this->score=score;
   }
   void print()
   {
     cout <<"num: " << num << " name: " << name << " score: " << score <<endl;
   }
   bool compare(Student other)
   {
     return this->score < other.score;
   }
};

int main(int argc, char *argv[])
{
     Student s1;
	 s1.init(23, "jack", 88);
	 s1.print();

	 
     return 0;
}
