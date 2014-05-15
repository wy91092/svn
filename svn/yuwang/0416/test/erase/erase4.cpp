/*************************************************************************
	> File Name: erase3.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 03:54:38 PM CST
 ************************************************************************/

#include"test.h"
using namespace std;

void print( int s)
{
   cout << s <<" ";
}

int main(int argc,char *argv[])
{
  list<int> lst;
  for(size_t ix=0;ix!=20;++ix)
  {
    lst.push_back(ix);
  }
 // list<int> lst(vec.begin(),vec.end());
  list<int>::iterator iter=lst.begin();
  while(iter!=lst.end())
  {
     if(*iter%2==0)
	 {
	  iter= lst.erase(iter);
	 }
     else
	 {
	 ++iter;
	 }
  
  }
/*   iter=lst.begin();
  for(;iter!=lst.end();++iter)
  {
   cout<<*iter<<" ";
  }
*/  for_each(lst.begin(),lst.end(),print);
  cout<<endl;
}
