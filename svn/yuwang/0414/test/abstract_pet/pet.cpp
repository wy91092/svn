/*************************************************************************
	> File Name: pet.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 03:15:15 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class Pet
{
  public:
	  virtual void Speak()=0;
	  void ShowMe();
};
void Pet::ShowMe()
{
  cout<<"my voice: ";
  Speak();
}

class Cat:public Pet
{
  public:
	  virtual void Speak()
	  {
	  cout<<"miao ~ miao ~"<<endl;
	  }
};
class Dog:public Pet
{
  public:
	  virtual void Speak()
	  {
	  cout<<"wang ~ wang ~"<<endl;
	  }
};

int main()
{
  Cat cat;
  Dog dog;
  cat.ShowMe();
  dog.ShowMe();
}
