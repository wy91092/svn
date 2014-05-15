/*************************************************************************
	> File Name: staff.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sat 12 Apr 2014 07:03:06 PM CST
 ************************************************************************/

#ifndef _STAFF_H_
#define _STAFF_H_
#include<iostream>
#include<string>
#define MAX_EMPLOYEE  1000
using std::string;
class EmpSalary            //定义工资类
{
   friend class Employee;   
	private:
       float Wage;         //基本工资
	   float Subsidy;      //岗位津贴
	   float Rent;         //房租
	   float CostOfElec;   //电费
	   float CostOfWater;  //水费
   public:
	   float RealSum();    //计算实发工资
};
enum Position              //定义职务类型
{
  MANAGER,                 //经理
  ENGINEER,                //工程师
  EMPLOYEE,                //职员
  WORKER                   //工人
};
class Date                 //定义日期类
{
  private:
	  int day,month,year;
  public:
	  void init(int, int, int);
	  void print_ymd();
};
class Employee            //定义职工类
{
 private:
  string     Department;  //工作部门
  string     Name;        //姓名
  Date       Birthdate;   //出生日期
  Position   EmpPosition; //职务
  Date       DateOfWork;  //参加工作时间
  EmpSalary  Salary;      //工资
 public:
  void Register(string Depart, string name, Date tBirthdate, Position nPosition, Date tDateOfWork);
  void SetSalary(float wage, float subsidy, float rent, float elec, float water);
  float GetSalary();
  void ShowMessage();     //打印职工信息
};
#endif
