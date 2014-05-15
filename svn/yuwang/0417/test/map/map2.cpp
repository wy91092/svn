/*************************************************************************
	> File Name: map2.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 03:08:52 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
void print(const map<string,int>::value_type &p)
{
  cout<<p.first<<" "<<p.second<<endl;
}
int main()
{
  map<string, int>  word_count;
  string word,word1;
  while(cin >>word)
  {
    ++word_count[word];
  }
  map<string,int>::iterator iter=word_count.begin();
  for(;iter!=word_count.end();++iter)
  {
    cout <<iter->first <<" "<<iter->second <<endl; 
  }
  cout<<"-------------------"<<endl;
  for_each(word_count.begin(),word_count.end(),print);
  map<string, int>::key_type k1="hello";
  map<string, int>::mapped_type k2=11;
  map<string, int>::value_type k3=make_pair("test", 123);
}
