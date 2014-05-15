/*************************************************************************
	> File Name: 1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 22 Apr 2014 09:12:00 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

int main(int argc, char **argv)
{
  vector<int> vec;
  for(size_t ix=0;ix!=10;++ix)
  {
    vec.push_back(ix);
  }
  int sum=accumulate(vec.begin(), vec.end(), 42);
   cout <<"sum= "<<sum<<endl;


}
