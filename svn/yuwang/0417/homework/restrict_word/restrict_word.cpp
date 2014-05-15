/*************************************************************************
	> File Name: restrict_word.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 08:20:10 PM CST
 ************************************************************************/
#include<map>
#include<iostream>
#include<fstream>
#include<set>
#include<stdexcept>
#include<string>
#include<algorithm>
using namespace std;
void restricted_wc(ifstream &in,const set<string> &excluded, map<string, int> &word_count)
{  
	string word;
	while(in >>word)
	{
	  if(!excluded.count(word))
	      ++word_count[word];
	}
	in.close();
    in.clear();
}
ifstream &openfile(ifstream &in,const string &file)
{
   in.close();
   in.clear();
   in.open(file.c_str());
   return in;
}
void print_map(const map<string,int>::value_type &p)
{
   cout<<p.first<<" occurs "<<p.second <<" times"<<endl;
}
void print(const string &p)
{
   cout<< p<<" ";
}
int main(int argc,char**argv)
{
   ifstream is;
   if(!openfile(is, "in.txt"))
   {
     throw runtime_error("open file failed!");
   }
   set<string> excluded;
   excluded.insert("i");
   excluded.insert("you");
   excluded.insert("what");
   excluded.insert("is");
   map<string,int> word_count;
   for_each(excluded.begin(),excluded.end(),print);
   cout<<"---------------------"<<endl;

   restricted_wc(is,excluded,word_count);
   for_each(word_count.begin(),word_count.end(),print_map);
   return 0;
}
