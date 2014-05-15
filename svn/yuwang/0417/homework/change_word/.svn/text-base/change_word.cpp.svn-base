/*************************************************************************
	> File Name: change_word.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 17 Apr 2014 09:11:45 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<map>
#include<string>
#include<fstream>
#include<stdexcept>
#include<vector>
using namespace std;
ifstream &open_file(ifstream &in,const string &filename)
{
   in.close();
   in.clear();
   in.open(filename.c_str());
   return in;
}
void change_word(ifstream &is_1,ifstream &is_2, vector<string> &after_word,map<string,string> &before_word)
{
	string b_word,f_word,c_word;;
   while(is_1>>b_word>>f_word)
   {
     before_word.insert(make_pair(b_word,f_word));
   }
   while(is_2>>c_word)
   { 
	 map<string,string>::iterator it=before_word.find(c_word);
     if(it!=before_word.end())
	 {
          c_word=it->second; 
	     after_word.push_back(c_word);
	 }
	 else after_word.push_back(c_word);
   }
   is_1.close();
   is_1.clear();
   is_2.close();
   is_2.clear();
}
void print(const string &p)
{
  cout<<p<<" ";
}
int main()
{
  ifstream is_1,is_2;
  if(!open_file(is_1,"1.txt"))
  {
    throw runtime_error("open file1 failed");
  }
  if(!open_file(is_2,"2.txt"))
  {
    throw runtime_error("open file2 failed");
  }
   map<string, string> before_word;
   vector<string> after_word;
   change_word(is_1, is_2, after_word, before_word);
   for_each(after_word.begin(),after_word.end(),print);
   cout<<endl;
}
