/*************************************************************************
	> File Name: struct_sort.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 09:01:29 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Student
{
  friend bool cmp(const Student &, const Student &);	
  private:
	  std::size_t _id;
	  std::string _name;
	  std::size_t _score;
  public:
	  Student():_id(501),_name("heqing"),_score(77){}
	  Student(std::size_t id, const std::string &name,std::size_t score):_id(id),_name(name),_score(score){}
	  std::size_t get_id() const{ return this->_id;}
	  std::string get_name() const{return this->_name;}
	  std::size_t get_score()const{return this->_score;}
      void set(std::size_t id, const std::string &name,std::size_t score)
	  {
	    _id=id;
		_name=name;
	    _score=score;
	  }
};
static  void swap(Student &a,Student &b)
{
  Student temp=a;
      a=b;
	  b=temp;
}
bool cmp(const Student &a, const Student &b)
{
if(a._score!=b._score)
  return a._score<b._score;
if(a._name!=b._name)
  return a._name<b._name;
if(a._score!=b._score)
  return a._id<b._id;
}
void bubble_sort(std::vector<Student> &vec,bool (*cmp)(const Student &,const Student &))
{
  std::vector<Student>::size_type size=vec.size();
  for(std::vector<Student>::size_type ix=0;ix!=size;++ix)
  {
     for(std::vector<Student>::size_type iy=0;iy!=size-ix-1;++iy)
	 {
	   if(cmp(vec[iy],vec[iy+1]))
	   {
	      swap(vec[iy],vec[iy+1]);
	   }
	 
	 }
  
  }
}



int main(int argc,char *argv[])
{
   std::vector<Student> vec;
   Student s1;
   Student s2(508,"julia",60);
   Student s3;
   s3.set(505,"vincent", 59);
   vec.push_back(s1);
   vec.push_back(s2);
   vec.push_back(s3);
   bubble_sort(vec,cmp);
   std::vector<Student>::const_iterator iter=vec.begin();
   for(;iter!=vec.end();++iter)
   {
	   std::cout << (*iter).get_id() <<" "<<(*iter).get_name()<<" "<<(*iter).get_score()<<endl;;
   }
   return 0;
}
