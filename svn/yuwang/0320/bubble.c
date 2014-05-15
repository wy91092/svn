#include"sort.h"

void bubble_sort(int *a, int len)
{
  int i=0,j=0,tmp;
  for(i=0;i<len-1;i++)
  {
      for(j=0;j<len-i-1;j++)
	  {
	     if(a[j]>a[j+1])
		 {
		    tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
		 }	  
		  
	  }	  
	  
	  
  }
	
	
}
