#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int *a, int *b)
{
   int tmp=*a;
      *a=*b;
	  *b=tmp;

}


int partition(int *a, int len)
{   int lo=0;
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

void quicksort(int *a, int len)
{
  int k;
  int lo=0;
  int hi=len-1;
  if(lo<hi)
  {
    k=partition(a,len);
	quicksort(a, k);
	quicksort(a+k+1, len-k-1);
  }
}


int main()
{
  int i;	
  int a[6]={8,4,7,2,9,5};
  quicksort(a,6);
  for(i=0;i<6;i++)
	  printf("%3d",a[i]);
  printf("\n");
  return 0;
}
