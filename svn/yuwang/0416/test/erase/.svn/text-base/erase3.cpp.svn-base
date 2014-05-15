/*************************************************************************
	> File Name: erase3.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 03:54:38 PM CST
 ************************************************************************/

#include"test.h"
using namespace std;

void print(int s)
{
   cout << s <<" ";
}

int main(int argc,char *argv[])
{
  vector<int> vec;
  for(size_t ix=0;ix!=20;++ix)
  {
    vec.push_back(ix);
  }

  vector<int>::iterator iter=vec.begin();
  while(iter!=vec.end())
  {
     if(*iter%2==0)
	 {
	   iter=vec.erase(iter);
	 }
     else
	 {
	 ++iter;
	 }
  
  }
/*   iter=vec.begin();
  for(;iter!=vec.end();++iter)
  {
   cout<<*iter<<" ";
  }
*/  for_each(vec.begin(),vec.end(),print);
  cout<<endl;
}
