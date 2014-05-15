/*************************************************************************
	> File Name: mend_stream.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 10 Apr 2014 04:19:56 PM CST
 ************************************************************************/
#include<stdexcept>
#include<iostream>
using std::cin;
int main()
{
   int ival;
   while(cin >>ival, !cin.eof())
   {
     if(cin.bad())
		 throw std::runtime_error("IO stream corrupted");
	 if(cin.fail())
	 {
	    std::cerr << "bad girl, try again !!" <<std::endl;
	    cin.clear();
		cin.ignore();
	    continue;
	 }
   }
   return 0;
}
