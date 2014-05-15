#include"sort.h"

void select_sort(int *a, int len)
{
   int i,min,j,tmp;
   for(i=0;i<len-1;i++)
   { min=i;
        for(j=i+1;j<len;j++)
		{
		  if(a[j]<a[min])
		  {
		      min=j;
		  }	
			
	    }
		if(min!=i)
		{
		  tmp=a[i];a[i]=a[min];a[min]=tmp;	
		}
	}
}
