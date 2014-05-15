/*************************************************************************
	> File Name: d_word.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 08 Apr 2014 03:47:28 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
vector<string> division_word(const string &str);
int main(int argc, char *argv[])
{
    string str="I have a book";
	vector<string> display;
	display =division_word(str);
	for(vector<string>::size_type i=0; i!=display.size(); ++i)
	{
	   //cout << display.at(i) <<endl;
	   cout << display[i] <<endl;
	}

	vector<string>::iterator iter=display.begin();
	for(; iter!=display.end(); ++iter)
	{
	   cout << (*iter) <<"\t";
	}
	cout<<std::endl;
	cout<<"display.size()="<<display.size();
	return 0;
}

vector<string> division_word(const string &str)
{
    vector<string> temp;
	typedef string::size_type string_size;
	string_size i=0;
	while(i!=str.size())
	{
	    while(i!=str.size()&& isspace(str[i]))
			++i;
		string_size j=i;
		while(j!=str.size()&& !isspace(str[j]))
			++j;
		if(i!=j)
		{
		   temp.push_back(str.substr(i, j-i));
		   i=j;
		}
	}
   return temp;
}
