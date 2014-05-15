/*************************************************************************
	> File Name: 1.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 10 Apr 2014 10:00:20 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
char &get_val(string &str, string::size_type ix)
{
   return str[ix];
}
string make_plural(size_t ctr, const string &word, const string &ending)
{
  return (ctr==1) ?word: word+ending;
}

const string &shorter(const string &a, const string &b)
{
   return (a>b)?b:a;

}
int main(int argc, char *argv[])
{
   /* string s("a value");
	cout << s << endl;
	get_val(s, 0)='b';
	cout << s <<endl;
	cout << endl;
	string word("person");
	string ending("s");
	string last;
	int num;
	cin >>num;
	last=make_plural(num,word,ending);
	cout << last <<endl;
	*/
    const string &(*p1)(const string &, const string &);
	string s1="hello";
	string s2="ajjyo";
	p1=&shorter;
	cout << p1(s1, s2) <<endl;
	return 0;
}
