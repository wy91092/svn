/*************************************************************************
	> File Name: swap.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 08 Apr 2014 05:29:22 PM CST
 ************************************************************************/

#include<iostream>

void swap(int ***a, int ***b)
{
  int  **temp=NULL;
	    temp =*a;
       *a=*b;
	   *b=temp;
}
int main()
{
  int num1,num2;
  std::cin >> num1 >> num2 ;
  int *p1=&num1, *p2=&num2;
  int **pp1=&p1, **pp2=&p2;
  std::cout << "before:" <<std::endl;
  std::cout << "pp1: " << pp1 <<std::endl;
  std::cout << "pp2: " << pp2 <<std::endl;
  swap(&pp1, &pp2);
  std::cout << "after:" <<std::endl;
  std::cout << "pp1: " << pp1 <<std::endl;
  std::cout << "pp2: " << pp2 <<std::endl;
}
