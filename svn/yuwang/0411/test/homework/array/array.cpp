/*************************************************************************
  > File Name: array.cpp
  > Author: crooked
  > Mail:812665244@qq.com 
  > Created Time: Wed 09 Apr 2014 10:17:15 AM CSTt 
 ************************************************************************/

#include"array.h"
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
Array::Array()
{
  _row=2;
  _col=2;
  _data=new int*[_row];
	for(std::size_t ix=0;ix!=_row;++ix)
	{
		_data[ix]=new int[_col];
	}


}

 Array::Array( std::size_t row,std::size_t col)
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
void  Array:: destroy()
{
	for(std::size_t ix=0;ix!=_row;++ix)
	{ 
		delete[] _data[ix];
	}
	delete[] _data;
	_data=NULL;
}
void Array::add(Array *other, Array *ret)
{
	for(int ix=0;ix!=_row;++ix)
	{
		for(int iy=0;iy!=_col;++iy)
		{
			ret->_data[ix][iy]=_data[ix][iy]+other->_data[ix][iy];
		}
	}
}
void Array::mul( Array *other, Array *ret)
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

bool Array::equal(Array *other)
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
void  Array::print()
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
Array::~Array()
{
  cout << "haha , destroy" <<endl;
}
