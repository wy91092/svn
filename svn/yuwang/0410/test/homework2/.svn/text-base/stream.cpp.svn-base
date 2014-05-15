/*************************************************************************
  > File Name: stream.cpp
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Thu 10 Apr 2014 04:31:54 PM CST
 ************************************************************************/

#include<iostream>
#include<stdexcept>
#include<vector>
#include<fstream>
#include <sstream>
#include<string>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector; 
using std::istringstream; 

void read_file(const vector<string> &files, vector<vector<string> > &lines, vector<vector<string> > &words)
{
	std::ifstream is;
	string line;
	vector<string> liness;
	vector<string> wordss;
	string word;
	// vector<string>::iterator iter1=files.begin();
	for(vector<string>::size_type ix=0;ix!=files.size();++ix)
	{
		cout << ix << endl;
		is.open(files[ix].c_str());

		while(std::getline(is, line))
		{
			liness.push_back(line);
			istringstream iss(line);

			while (iss >> word) {
				wordss.push_back(word);
			}
		}
		words.push_back(wordss);
		lines.push_back(liness);
		is.clear();
		is.close();
	}
}

int main(int argc, char *argv[])
{
	vector<string> files;
	for(int i=1;i!=argc;++i)
	{
		files.push_back(argv[i]);
	}
	/* vector<string>::iterator iter=files.begin();
	   cout <<*iter<<endl;
	   */
	vector<vector<string> > lines;
	vector<vector<string> > words;
	//cout << "haha"<<endl;
	read_file(files,  lines ,words);
	cout << "which file do you want to see:" <<endl;
	vector<string>::size_type num;
	cin >> num;
	num=num-1;
    vector<string>::iterator iter1=lines[num].begin();
	for(;iter1!=lines[num].end();++iter1)
	{
	  cout << *iter1 <<endl;
	}
	cout <<endl;
    vector<string>::iterator iter2=words[num].begin();
	for(;iter2!=words[num].end();++iter2)
	{
	  cout << *iter2 <<endl;
	}
	return 0;
}


