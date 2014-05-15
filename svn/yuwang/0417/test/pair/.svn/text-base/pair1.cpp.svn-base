/*************************************************************************
	> File Name: pair1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 02:38:20 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void print(const pair<string, int> &p)
{
  cout <<p.first<<" "<<p.second<<endl;
}
int main()
{
   string s;
   int t;
   vector<pair<string ,int> > vec;
   while(cin>>s>>t)
   {
	  //pair<string, int> tmp;
	  //tmp.first=s;
	  //tmp.second=t;
	  vec.push_back(make_pair(s,t));
   }
   for_each(vec.begin(),vec.end(),print);
   return 0;
  
}
