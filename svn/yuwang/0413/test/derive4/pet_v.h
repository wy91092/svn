/*************************************************************************
	> File Name: pet.h
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 13 Apr 2014 04:28:10 PM CST
 ************************************************************************/

#ifndef _PET_V_H_
#define _PET_V_H_
#include<iostream>
using std::cout;
using std::endl;
class Pet
{
  public:
  virtual  void Speak(){ cout <<"How dose a pet speak ?" <<endl;}
};
class Cat: public Pet
{
  public:
 virtual void Speak(){ cout <<"miao ! miao !" <<endl;}
};
class Dog: public Pet
{
  public:
 virtual void Speak(){ cout<<"wang ! wang !"<<endl;}
};



#endif
