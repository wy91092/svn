/*************************************************************************
	> File Name: 2.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 22 Apr 2014 10:03:11 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string make_plural(size_t ctr, const string &word, const string &ending)
{
  return (ctr==1)? word:word+ending;
}
bool isShorter(const string &s1, const string &s2)
{
  return s1.size()<s2.size();
}

bool GT6(const string &s)
{
  return s.size() >=6;
}
int main()
{
   vector<string> words;
   string next_word;
   while(cin>>next_word)
   {
     words.push_back(next_word);
   }

   sort(words.begin(), words.end());

   vector<string>::iterator end_unique=unique(words.begin(), words.end());
   words.erase(end_unique, words.end());

   stable_sort(words.begin(), words.end(), isShorter);
   vector<string>::size_type wc=count_if(words.begin(),words.end(),GT6);
   cout<<wc<<" "<<make_plural(wc, "word", "s")<<"6 characters or longer"<<endl;
   return 0;

}
