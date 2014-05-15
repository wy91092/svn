/*************************************************************************
	> File Name: pet.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 13 Apr 2014 05:20:14 PM CST
 ************************************************************************/

#ifndef _PET_H_
#define _PET_H_
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
class Pet
{
   string Name;
   int Age;
   string Color;
   public:
   string Type;
   Pet(string, int, string);
   string GetName() {return Name;}
   int GetAge() { return Age;}
   string GetColor() { return Color;}
   virtual void Speak() =0;
   virtual void GetInfo(){}
};

class Cat: public Pet
{
   public:
	   Cat(string name, int age, string color):Pet(name, age, color){}
	   void Speak(){cout<<"Sound of speak:miao,miao!"<<endl;}
       void GetInfo(); 
};
class Dog:public Pet
{
   public:
	   Dog(string name, int age, string color):Pet(name, age, color){}
	   void Speak(){cout<<"Sound of speak:wang,wang!"<<endl;}
       void GetInfo(); 
};



#endif
