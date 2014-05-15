/*************************************************************************
	> File Name: error.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 09 Apr 2014 02:16:13 PM CST
 ************************************************************************/

#include<iostream>
#include<stdexcept>
using std::cout;
using std::endl;
using std::string;
int main(int argc,char *argv[])
{
	std::string s;
    while(1)
	{
	   try
	   {
	     std::cin >> s;
		 if(s=="yes")
			 throw std::runtime_error("yes");
		 else if(s=="no")
			 throw std::out_of_range("no");
		 else
			 throw std::invalid_argument("other");
	   }
	   catch(std::out_of_range &e)
	   {
	   cout << e.what() <<endl;
	   }
	   catch(std::runtime_error &e2)
	   {
	   cout << e2.what() <<endl;
	   }
	   catch(...)
	   {
	   cout << "other" <<endl;
	   }
	} 
   return 0;
}
