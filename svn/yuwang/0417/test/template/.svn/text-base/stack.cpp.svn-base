/*************************************************************************
	> File Name: stack.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 10:45:02 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
template <typename T, int n=10>
class AnyStack
{
  T m_tStack[n];
  int m_nMaxElement;
  int m_nTop;
	public:
  AnyStack():m_nMaxElement(n), m_nTop(0){}
  int GetTop(){return m_nTop;}
  bool Push(T);    //入栈
  bool Pop(T&);    //出栈
};
template <typename T, int n>
bool AnyStack <T, n>::Push(T elem)
{
   if(m_nTop<=m_nMaxElement)
   {
     m_tStack[m_nTop]=elem;
     m_nTop++;
	 return true;
   }
   else  return false;
}
template <typename T, int n>
bool AnyStack <T, n>::Pop(T &elem)
{
   if(m_nTop>0)
   {
   m_nTop--;
   elem=m_tStack[m_nTop];
   return true;   
   }
   else return false;
}
int main()
{
  int n;
  string s1;
  AnyStack<int> iStack;
  iStack.Push(5);
  iStack.Push(6);
  iStack.Pop(n);
  cout<<"第一个出栈整数： "<<n<<endl;
  iStack.Pop(n);
  cout<<"第二个出栈整数： "<<n<<endl;
  AnyStack <string> strStack;
  strStack.Push("it`s the first");
  strStack.Push("it`s the second");
  strStack.Pop(s1);
  cout<<"第一个出栈字符串： "<<s1<<endl;
  strStack.Pop(s1);
  cout<<"第二个出栈字符串： "<<s1<<endl;
  return 0;
}
