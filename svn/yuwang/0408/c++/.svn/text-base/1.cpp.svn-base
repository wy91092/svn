/*************************************************************************
  > File Name: 1.cpp
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Tue 08 Apr 2014 01:25:05 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<ctype.h>
#include<cctype>
#include<string>
std::string change(std::string s)
{
   for(std::string::size_type ix=0;ix!=s.size();++ix )
   {
      if(std::islower(s[ix]))
	  {
	    s[ix]=std::toupper(s[ix]);
	  }else if(std::isupper(s[ix]))
	  {
	    s[ix]=std::tolower(s[ix]);
	  }
   }
   return s;
}

int main(int argc, char *argv[])
{
	std::vector<std::string> line;
	std::string word;
	while(std::cin >> word)
	{
		line.push_back(word);
	}

	std:: cout << std::endl;
	for(std::vector<std::string>::size_type ix=0;ix!=line.size();++ix)
	{
      line[ix]=change(line[ix]);
	  std:: cout << line[ix] << " " << std::endl;
	}
}
