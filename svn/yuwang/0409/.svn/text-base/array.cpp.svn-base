/*************************************************************************
	> File Name: array.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 09 Apr 2014 10:17:15 AM CSTt 
 ************************************************************************/

#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdexcept>
using std::cout;
using std::endl;
using std::string;

struct Matrix
{
   int **_data;
   std::size_t _row;
   std::size_t _col;
   void init( std::size_t row, std::size_t col)
   {
     _row=row;
	 _col=col;
	 _data=new int*[_row];
	 for(std::size_t ix=0;ix!=_row;++ix)
	 {
	  _data[ix]=new int[_col];
	 }
	 int num=0;
	 for(std::size_t ix=0;ix!=_row;++ix)
	 {
	   for(std::size_t iy=0;iy!=_col;++iy)
	   {
		    std::cin>>num;
		   _data[ix][iy]=num;
	   }
	 }
	 std::cout << std::endl;
   }
   void destroy()
   {
	 for(std::size_t ix=0;ix!=_row;++ix)
	 { 
             delete[] _data[ix];
	 }
     delete[] _data;
	 _data=NULL;
   }
   void add_array(Matrix *other, Matrix *ret)
   {
     for(int ix=0;ix!=_row;++ix)
	 {
	    for(int iy=0;iy!=_col;++iy)
		{
		  ret->_data[ix][iy]=_data[ix][iy]+other->_data[ix][iy];
		}
	 }
   }
   void mul_array( Matrix *other, Matrix *ret)
   {
	   if(_col!=other->_row)
		   throw std::runtime_error("no no no");
	   if(_row!=ret->_row||other->_col!=ret->_col)
		   throw std::runtime_error("error2");
	   for(std::size_t ix=0;ix!=_row;++ix)
	   {
	      for(std::size_t iy=0;iy!=other->_col;++iy)
	      {   int sum=0;
	           for(std::size_t iz=0;iz!=_col;++iz)
			   {
			     sum+=_data[ix][iz]*other->_data[iz][iy];
			   }
	           ret->_data[ix][iy]=sum;
	      }	   
	   
	   }
   }
   bool equal(Matrix *other)
   {
     for(std::size_t ix=0;ix!=_row;++ix)
	 {
	    for(std::size_t iy=0;iy!=_col;++iy)
		{
		  if(_data[ix][iy]!=other->_data[ix][iy]) return false;
		}
	 }
	  return true;
   }
   void print()
   {
     for(int ix=0;ix!=_row;++ix)
	 {
	    for(int iy=0;iy!=_col;++iy)
		{
			std::cout << _data[ix][iy] << " " ;
		}
		std::cout << std::endl;
	 }
   }
};
int main(int argc, char *argv[])
{
    struct Matrix m1,m2,m3;;
    m1.init(2,2);  
    m2.init(2,2);
    m3.init(2,2);
	m1.mul_array(&m2,&m3);
	cout << "m3=m1*m2:" <<endl;
	m3.print();
	m1.add_array(&m2,&m3);
	cout << "m3=m1+m2:" <<endl;
	m3.print();
    m1.destroy();  
    m2.destroy();  
    m3.destroy();  
	
	return 0;
   
}
