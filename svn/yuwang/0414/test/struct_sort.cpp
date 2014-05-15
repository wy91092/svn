/*************************************************************************
	> File Name: struct_sort.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 09:01:29 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
static inline void swap(int &a,int &b)
{
  int temp=a;
      a=b;
	  b=temp;
}
bool cmp(int a, int b)
{
  return a<b;
}
void bubble_sort(std::vector<int> &vec,bool (*cmp)(int,int))
{
  std::vector<int>::size_type size=vec.size();
  for(std::vector<int>::size_type ix=0;ix!=size;++ix)
  {
     for(std::vector<int>::size_type iy=0;iy!=size-ix-1;++iy)
	 {
	   if(cmp(vec[iy],vec[iy+1]))
	   {
	      swap(vec[iy],vec[iy+1]);
	   }
	 
	 }
  
  }
}



int main()
{
   std::vector<int > vec;
   vec.push_back(3);
   vec.push_back(9);
   vec.push_back(1);
   vec.push_back(2);
   vec.push_back(6);
   vec.push_back(5);
   bubble_sort(vec,cmp);
   std::vector<int>::const_iterator iter=vec.begin();
   for(;iter!=vec.end();++iter)
   {
     cout<<*iter<<" ";
   }
   return 0;
}
