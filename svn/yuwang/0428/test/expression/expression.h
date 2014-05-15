/*************************************************************************
  > File Name: expression.h
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Mon 28 Apr 2014 10:40:15 AM CST
 ************************************************************************/
#ifndef _EXPRESSION_H_
#define _EXPRESSION_H_
#include<iostream>
#include<stack>
#include<string>
std::string get_postfix_exp(const std::string &infix);
//bool is_operator(char ch);
//int priority(char a);
int postfix_calculate(const std::string &postfix);
//void get_two_nums(std::stack<int> &num_stack, int &first, int &second);
#endif
