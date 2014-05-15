/*************************************************************************
	> File Name: swap.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 09 Apr 2014 04:10:18 PM CST
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;

typedef struct TreeNode
{
   int data;
   TreeNode *left;
   TreeNode *right;
}*pTree,Tree;
void swap(pTree *p1, pTree *p2)
{
  pTree temp=*p1;
        *p1=*p2;
		*p2=temp;
}
void swap(int *********a, int*********b)
{
    int ********temp=*a;
	            *a=*b;
				*b=temp;
}
int main(int argc, char *argv[])
{
    int num1=1,num2=2;
	int ********p1=(int ********)&num1,********p2=(int ********)&num2;
	cout << "before:" <<endl;
	cout << "p1= " << p1 <<endl;
	cout << "p2= " << p2 <<endl;
	swap(&p1, &p2);
	cout << "after:" <<endl;
	cout << "p1= " << p1 <<endl;
	cout << "p2= " << p2 <<endl;
    return 0; 
}
