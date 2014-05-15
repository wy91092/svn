/*************************************************************************
	> File Name: insert4.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 16 Apr 2014 02:43:40 PM CST
 ************************************************************************/

#include"test.h"
using namespace std;

void print(const std::string &s)
{
   cout << s<< " ";
}

int main(int argc, char *argv[])
{
  list<string> lst;
  std::string word;
  list<string>::iterator it=lst.begin();

  while(cin >> word)
  {
     it =lst.insert(it, word);
  }
   std::for_each(lst.begin(), lst.end(), print);
   cout <<endl;
   return 0;
}
