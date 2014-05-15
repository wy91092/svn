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
  string word;
  while(cin >>word)
  {
  std::pair<std::map<std::string,int>::iterator,bool> ret=word_count.insert(std::map<std::string, int>::value_type(word,1));
  if(!ret.second)
  {
    ++ret.first->second;
  }
  }
  map<string,int>::iterator iter=word_count.begin();
  for(;iter!=word_count.end();++iter)
  {
    cout <<iter->first <<" "<<iter->second <<endl; 
  }
  cout<<"-------------------"<<endl;
  for_each(word_count.begin(),word_count.end(),print);
}
