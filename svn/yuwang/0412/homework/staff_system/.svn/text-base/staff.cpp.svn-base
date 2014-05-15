/*************************************************************************
	> File Name: staff.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sat 12 Apr 2014 07:23:54 PM CST
 ************************************************************************/

#include"staff.h"
using std::cout;
using std::endl;
float EmpSalary::RealSum()
{
  return Wage+Subsidy-Rent-CostOfElec-CostOfWater;
}

void Date::init(int yy, int mm, int dd)
{
  month=(mm>=1&&mm<=12)?mm:1;
  year=(yy>=1900&&yy<=2100)?yy:1900;
  day=(dd>=1&&dd<=31)?dd:1;
}
void Date::print_ymd()
{
  cout<<year<<"-"<<month<<"-"<<day<<endl;
}

void Employee::Register(string Depart, string name, Date tBirthdate, Position nPosition, Date tDateOfWork)
{
  Department  =Depart;
  Name        =name;
  Birthdate   =tBirthdate;
  EmpPosition =nPosition;
  DateOfWork  =tDateOfWork;
}
void Employee::SetSalary(float wage, float subsidy, float rent, float elec, float water)
{
  Salary.Wage=wage;
  Salary.Subsidy=subsidy;
  Salary.Rent=rent;
  Salary.CostOfElec=elec;
  Salary.CostOfWater=water;
}
float Employee::GetSalary()
{
  return Salary.RealSum();
}
void Employee::ShowMessage()
{
  cout<<"Depart:"<<Department<<endl;
  cout<<"Name:"<<Name<<endl;
  cout<<"Birthdate:";
  Birthdate.print_ymd();
  switch(EmpPosition)
  {
   case MANAGER:
	   cout<<"Position:"<<"MANAGER"<<endl;break;
   case ENGINEER:
	   cout<<"Position:"<<"ENGINEER"<<endl;break;
   case EMPLOYEE:
	   cout<<"Position:"<<"EMPLOYEE"<<endl;break;
   case WORKER:
	   cout<<"Position:"<<"WORKER"<<endl;break;
  }
  cout<<"Date of Work:";
  DateOfWork.print_ymd();
  cout<<"Salary:"<<GetSalary()<<endl;
  cout<<"----------"<<endl;
}


