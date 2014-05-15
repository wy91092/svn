/*************************************************************************
	> File Name: expression.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 28 Apr 2014 10:43:42 AM CST
 ************************************************************************/

#include"expression.h"

using namespace std;
static bool is_operator(char ch)
{
  if(ch=='+'||ch=='-'||ch=='/'||ch=='*') return true;
  else return false;
}

static int priority(char a)
{
  if(a=='*'||a=='/') return 2;
  else if(a=='-'||a=='+') return 1;
}

std::string get_postfix_exp(const std::string &infix)
{
  string result;
  stack<char> oper;
  for(int i=0;i<infix.size();i++)
  {
	char p=infix[i];
	if(is_operator(p))
	{
    while(!oper.empty()&&is_operator(oper.top())&&priority(p)<=priority(oper.top()))
	{
	    result.push_back(oper.top());
	    result.push_back(' ');
		oper.pop();
	}
    oper.push(p);
	}
	else if(p=='(')
	{
	oper.push(p);
	}
	else if(p==')')
	{
	  while(oper.top()!='(')
	  {
	  result.push_back(oper.top());
	  result.push_back(' ');
	  oper.pop();
	  }
	}
	else
	{
	result.push_back(p);
	result.push_back(' ');
	}
  }
  while(!oper.empty())
  {
  result.push_back(oper.top());
  result.push_back(' ');
  oper.pop();
  }
  result[result.size()-1]=' ';
  return result;
}

static void get_two_nums(std::stack<int> &num_stack, int &first, int &second)
{
    second=num_stack.top();
	num_stack.pop();

	first=num_stack.top();
    num_stack.pop();
}

int postfix_calculate(const std::string &postfix)
{
  stack<int> num_stack;
  int first,second,result;
  for(int i=0;i<postfix.size();i++)
  {
    char p=postfix[i];
	switch(p)
	{
	  case '+':
		get_two_nums(num_stack,first,second);
		num_stack.push(first+second);
		break;
	  case '-':
		get_two_nums(num_stack,first,second);
		num_stack.push(first-second);
		break;
	  case '*':
		get_two_nums(num_stack,first,second);
		num_stack.push(first*second);
		break;
	  case '/':
		get_two_nums(num_stack,first,second);
		num_stack.push(first/second);
        break;
	  case ' ':
		break;
	  default:
        num_stack.push(p-'0');  //关键地方
		break;
	}
  }
  result=num_stack.top();
  num_stack.pop();
  return result;
}
