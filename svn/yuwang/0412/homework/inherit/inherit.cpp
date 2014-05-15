/*************************************************************************
	> File Name: inherit.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sat 12 Apr 2014 09:33:41 PM CST
 ************************************************************************/

#include"inherit.h"
#include<cstring>
using std::cout;
using std::endl;
using std::string;
void Person::Register(string name, int age, char sex)
{
  Name=name;
  Age=age;
  Sex=(sex== 'm'?'m':'f');
}
void Person::ShowMe()
{
  cout << Name <<"\t"<< Age <<'\t'<< Sex << endl;
}

void Student::RegisterStu(string classname,int number,string name,int age,char sex)
{
  ClassName= classname;
  Number=number;
  Register(name, age, sex);    //派生类成员函数直接使用基类的公有成员
}
void Student::ShowStu()
{
  cout<< Number <<'\t'<< ClassName <<'\t';
  ShowMe();                    //直接使用基类的公有成员
}
