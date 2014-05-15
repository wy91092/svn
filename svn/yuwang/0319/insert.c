#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void insert(int *a, int len)
{
 int i=0,j=0,t;
 for(i=1;i<len;i++)
 { 
    if(a[i]<a[i-1])
	{t=a[i];
	for(j=i-1;a[j]>t;j--)
	    {
		  a[j+1]=a[j];
		  a[j]=t;
		}	
    }
 }
}

int main()
{
  int i;
  int a[8]={2,6,4,8,5,3,9,1};
  insert(a,8);
  for(i=0;i<8;i++)
	  printf("%3d",a[i]);
  printf("\n");
  return 0;
}
