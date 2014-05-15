/*************************************************************************
	> File Name: 1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 09:31:14 AM CST
 ************************************************************************/

#include"test.h"
using namespace std;

int main()
{
  vector<int> vec;
  cout << vec.size()<<" "<<vec.capacity()<<endl;
  cout <<"-----------------"<<endl;

  for(size_t ix=0;ix!=24;++ix)
  {
     vec.push_back(ix);
  }
  cout << vec.size()<<" "<<vec.capacity()<<endl;
  
  vec.reserve(50);
  cout << vec.size()<<" "<<vec.capacity()<<endl;

  while(vec.size()!=vec.capacity())
  {
     vec.push_back(0);
  }
  
  cout << vec.size()<<" "<<vec.capacity()<<endl;
  vec.push_back(11);
  cout << vec.size()<<" "<<vec.capacity()<<endl;
}
