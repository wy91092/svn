/*************************************************************************
	> File Name: main.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 06:59:35 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include"shape.h"
#include"point.h"
#include"circle.h"
#include"rectangle.h"
void virtualViaPointer( const Shape *);
void virtualViaReference( const Shape &);
int main()
{
	//创建对象
   Point point(30,50);
   Circle circle(120,80,10.0);
   Rectangle rectangle(10,10,8.0,5.0);
    //输出对象信息
   point.PrintShapeName();
   point.Print();
   cout<<endl;
   circle.PrintShapeName();
   circle.Print();
   rectangle.PrintShapeName();
   rectangle.Print();
   //定义基类对象指针
   Shape *arrayOfShapes[3];
   arrayOfShapes[0]=&point;
   arrayOfShapes[1]=&circle;
   arrayOfShapes[2]=&rectangle;
   //通过基类对象指针访问派生类对象
   cout<<"Virtual function calls made off" <<"base - class pointers\n";
   for(int i=0;i!=3;i++)
	   virtualViaPointer(arrayOfShapes[i]);
   cout<<"Virtual function calls made off" <<"base - class references\n";
   for(int j=0;j!=3;j++)
	   virtualViaPointer(arrayOfShapes[j]);
   return 0;   
}
//通过基类对象指针访问虚函数实现动态绑定
void virtualViaPointer(const Shape *baseClassPtr)
{
   baseClassPtr->PrintShapeName();
   baseClassPtr->Print();
   cout<<"Area= "<<baseClassPtr->Area() <<endl;
}
//通过基类对象引用访问虚函数实现动态绑定
void virtualViaReference(const Shape &baseClassRef)
{
   baseClassRef.PrintShapeName();
   baseClassRef.Print();
   cout<<"Area= "<<baseClassRef.Area() <<endl;
}
