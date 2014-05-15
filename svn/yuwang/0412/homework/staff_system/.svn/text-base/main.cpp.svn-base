/*************************************************************************
	> File Name: main.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sat 12 Apr 2014 07:40:38 PM CST
 ************************************************************************/

#include"staff.h"
int main()
{
  Employee EmployeeList[MAX_EMPLOYEE];  //定义职工档案数组
  int EmpCount=0;
  Date birthdate,workdate;
  //输入第一个职工的数据
  birthdate.init(1955,5,3);
  workdate.init(2013,1,1);
  EmployeeList[EmpCount].Register("总书记","习近平",birthdate,ENGINEER,workdate);
  EmployeeList[EmpCount].SetSalary(100000,200,100,50,20);
  EmpCount++;
  //输入第二个职工数据
  birthdate.init(1956,4,8);
  workdate.init(2013,1,1);
  EmployeeList[EmpCount].Register("总理","李克强",birthdate,MANAGER,workdate);
  EmployeeList[EmpCount].SetSalary(90000,200,150,50,20);
  EmpCount++;
  //输出所有职工的记录
  for(int i=0;i<EmpCount;i++)
	  EmployeeList[i].ShowMessage();
  return 0;
}
