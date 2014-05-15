/*************************************************************************
	> File Name: map4.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 04:58:23 PM CST
 ************************************************************************/

#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
void print(const map<string,int>::value_type &p)
{
  cout<<p.first<<" occurs: "<<p.second<<" times"<<endl;
}
int main()
{
   map<string, int> word_count;
   string word;
   word_count["test"]=10;
   word_count["foo"]=5;
   word_count["bar"]=12;
   cout<<word_count.count("test")<<endl;
   cout<<word_count.count("hello")<<endl;

   map<string, int>::iterator iter=word_count.find("test");
   if(iter==word_count.end())
   {
     cout <<"not found"<<endl;
   }
   else
   {
     cout<<iter->first<<" "<<iter->second<<endl;
   }
   for_each(word_count.begin(),word_count.end(),print);
   cout<<" -----------------"<<endl;
   word_count.erase("test");
   for_each(word_count.begin(),word_count.end(),print);

}
