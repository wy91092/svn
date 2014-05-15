/*************************************************************************
	> File Name: main.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 10:17:12 AM CST
 ************************************************************************/

#include"complex.h"
#include<iostream>
using std::cout;
using std::endl;
int main()
{
 Complex c1(3,4),c2(5,6),c3;
 cout << "c1 = " << c1.Real()<<"+j"<< c1.Imag() <<endl;
 cout << "c2 = " << c2.Real()<<"+j"<< c2.Imag() <<endl;
 c3=c1+c2;
 cout << "c3 = " << c3.Real()<<"+j"<< c3.Imag() <<endl;
 c3=c3+6.5; 
 cout << "c3+6.5 = " << c3.Real()<<"+j"<< c3.Imag() <<endl;
 return 0;
}
