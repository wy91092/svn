/*************************************************************************
	> File Name: 2.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 09:35:39 AM CST
 ************************************************************************/

#include"test.h"
using namespace std;

int main()
{
    vector<int> vec;
	cout<<vec.size()<<" "<<vec.capacity() <<endl;

	vec.push_back(1);
	cout<<vec.size()<<" "<<vec.capacity() <<endl;
	vec.push_back(1);
	cout<<vec.size()<<" "<<vec.capacity() <<endl;
	vec.push_back(1);
	cout<<vec.size()<<" "<<vec.capacity() <<endl;
	vec.push_back(1);
	
	vec.push_back(1);
	cout<<vec.size()<<" "<<vec.capacity() <<endl;
    
	vec.reserve(199);
	while(vec.size()!=vec.capacity())
	{
	   vec.push_back(222);
	}
	cout<<vec.size()<<" "<<vec.capacity() <<endl;
	vec.push_back(1);
	cout<<vec.size()<<" "<<vec.capacity() <<endl;
    return 0;
}
