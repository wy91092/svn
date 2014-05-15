#include"sort.h"

void insert_sort(int *a, int len)
{
  int i=0,j=0,t;
  for(i=1;i<len;i++)
  {
     if(a[i]<a[i-1])
	 {
	  t=a[i];
	  for(j=i-1;a[j]>t;j--)
	  {
	      a[j+1]=a[j];
		  a[j]=t;
	 	  
	  }

	 }	  
  }
}
