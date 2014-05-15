/*************************************************************************
	> File Name: merge.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 09 Apr 2014 05:18:45 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
void input_word(std::size_t num, vector<string> &vec)
{
   vec.clear();
   string tmp;
   while(num--)
   {
     cin>>tmp;;
	 vec.push_back(tmp);
   }
}

int main(int argc, char *argv[])
{
   vector<string> vec;
 /*  string word;
   int num;
   cin >> num ;
   while(num--)
   {
	   cin>>word;
     vec.push_back(word);
	
   }
  */ input_word(3,vec);
   vector<string>::iterator iter=vec.begin();
   for(;iter!=vec.end();++iter)
   {
     cout << (*iter) <<" ";
   }
   cout << endl;
   return 0;
}
