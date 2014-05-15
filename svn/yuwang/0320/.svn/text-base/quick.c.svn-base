#include"sort.h"

void swap(int *a, int *b)
{int tmp=*a;
     *a=*b;
	 *b=tmp;
}


int partition(int *a, int len)
{  int lo=0;
int hi=len-1;
   int key=a[hi];
   int i=lo-1,j;
   for(j=lo;j<hi;j++)
   {
	   if(a[j]<key)
	   {
	      i=i+1;
		  swap(&a[i],&a[j]);
	   }   
	   
	}
	swap(&a[i+1],&a[hi]);
	return i+1;
	
}

void quick_sort(int *a, int len)
{
  int k;
  int lo=0;
  int hi=len-1;
  if(lo<hi)
  {
    k=partition(a,len);
	quick_sort(a,k);
	quick_sort(a+k+1,len-k-1);
	  
  }
}
