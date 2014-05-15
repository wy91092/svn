/*************************************************************************
	> File Name: exponent.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 10:39:42 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
template <typename T>
T Power(T a, int exp)
{
   T ans =a;
   while(--exp) ans*=a;
   return ans;
}
int main()
{
  cout<<"3^5= " <<Power(3,5)<<endl;
  cout<<"1.1^2= "<<Power(1.1, 2)<<endl;
  return 0;
}
