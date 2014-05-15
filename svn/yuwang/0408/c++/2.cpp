/*************************************************************************
	> File Name: 2.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 08 Apr 2014 02:08:04 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
int main(int argc, char *argv[])
{
    std::vector<int>tmp(5);
	std::vector<std::vector<int> >vec2(4,tmp);
	
	std::vector<std::vector<int> >arr(3,std::vector<int>2);
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<2;j++)
	  {
	   arr[i][j]=0; 
	  }
   
   }
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<2;j++)
	  {
		  std::cout <<  arr[i][j] << std::endl;
	  }
   
   }
}
