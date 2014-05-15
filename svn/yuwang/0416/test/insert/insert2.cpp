/*************************************************************************
	> File Name: insert2.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 01:39:30 PM CST
 ************************************************************************/

#include"test.h"
using namespace std;

int main(int argc, char**argv)
{
    vector<string> vec;
	vec.push_back("aa");
	vec.push_back("bb");
	vec.push_back("cc");
	vec.push_back("dd");
	vec.push_back("ee");
	vec.push_back("ff");

	vector<string>::iterator it=std::find(vec.begin(),vec.end(),string("dd"));
	vec.insert(it,"hehe");

	for(vector<string>::const_iterator iter=vec.begin();iter!=vec.end();++iter)
	{
	   cout << *iter <<" ";
	}
    cout <<endl;

	it=std::find(vec.begin(),vec.end(),string("hehe"));
	vec.insert(it, 3, "girl");
	for(vector<string>::const_iterator iter=vec.begin();iter!=vec.end();++iter)
	{
	   cout << *iter <<" ";
	}
    cout <<endl;

    cout <<"-----------------------"<<endl;

	list<string> lst;
	lst.push_back("heqing");
	lst.push_back("huangz");
	lst.push_back("leim");
	it=std::find(vec.begin(),vec.end(),string("cc"));

	vec.insert(it, lst.begin(), lst.end());
	for(vector<string>::const_iterator iter=vec.begin();iter!=vec.end();++iter)
	{
	   cout << *iter <<" ";
	}
    cout <<endl;
}
