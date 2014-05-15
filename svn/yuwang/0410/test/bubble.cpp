/*************************************************************************
	> File Name: bubble.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 10 Apr 2014 11:59:44 AM CST
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using std::cout;
using std::endl;
typedef struct Student
{
   int num;
   int score;
   std::string name;
}stu;
bool cmp1(stu a, stu b)
{
   return a.name>b.name;
}
bool cmp2(stu a, stu b)
{
   return a.num>b.num;
}
bool cmp3(stu a, stu b)
{
   return a.score>b.score;
}

void bubble(stu *a, int len, bool (*cmp)(stu, stu))
{
   for(std::size_t ix=0;ix<len;++ix)
   {
      for(std::size_t iy=0;iy<len-ix-1;++iy)
	  {
	     if(cmp1(a[iy],a[iy+1]))
		 {
		    stu temp=a[iy];
			    a[iy]=a[iy+1];
		        a[iy+1]=temp;
		 }
	  
	  }
   
   }
}
int main()
{
  /*  srand(time(NULL));
	int arr[10];
	for(std::size_t ix=0;ix!=10;++ix)
	{
	   arr[ix]=rand()%1000;
	}
    bubble(arr, 10, cmp);
    for(std::size_t ix=0;ix!=10;++ix)
	{
	   cout << arr[ix] <<"\t";
	}
    cout <<endl;
*/	stu a[3];
	a[0].num=502,a[0].score=60,a[0].name="heqing";
	a[1].num=507,a[1].score=56,a[1].name="xige";
	a[2].num=505,a[2].score=34,a[2].name="cunge";
	bubble(a, 3, cmp1);
    for(std::size_t ix=0;ix!=3;++ix)
	{
	   cout << a[ix].num << "\t" <<a[ix].score <<"\t" <<a[ix].name<<endl;
	}
	return 0;
}
