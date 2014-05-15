/*************************************************************************
	> File Name: insert1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 01:33:38 PM CST
 ************************************************************************/

#include"test.h"
using namespace std;
int main(int argc, char **argv)
{
     vector<string> vec;
	 vec.insert(vec.begin(),"hehe");
	 std::vector<string>::iterator first=vec.begin();
	 while(first!=vec.end())
	 {
	    cout << *first <<endl;
	    ++first;
	 }
     cout <<"-----------------"<<endl;

	 list<int> lst;
	 for(std::size_t ix=0;ix!=10;++ix)
	 {
	   lst.push_back(ix);
	 }

	 lst.push_front(100);
	 for(list<int>::iterator iter=lst.begin();iter!=lst.end();++iter){
	     cout <<*iter<<" ";
	 }
     cout <<endl;
}
