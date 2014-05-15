/*************************************************************************
	> File Name: test.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 11:27:43 AM CST
 ************************************************************************/
#include"expression.h"

using namespace std;
int main()
{
  string infix,postfix;
  while(true)
  {
  cin>>infix;
  postfix=get_postfix_exp(infix);
  cout<<postfix<<endl;
  cout<<postfix_calculate(postfix)<<endl;
  }
  return 0;
}
