#include"sort.h"

void swap_(int *a, int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void maxheap(int *a, int i, int heapsize)
{
   int left,right,largest;
   
   left=2*i+1;
   right=2*i+2;
   if(left<heapsize&&a[left]>a[i])  largest=left;
   else largest=i;

   if(right<heapsize&&a[right]>a[largest]) largest=right;

   if(largest!=i)
   {
	   swap_(&a[i],&a[largest]);
	   maxheap(a,largest, heapsize);
   }
}

void heap_sort(int *a,  int heapsize)
{
	int i;
	for(i=(heapsize-2)/2;i>=0;i--)
	{
		maxheap(a,i,heapsize);
	}
	for(i=heapsize;i>=1;i--)
	{
		swap_(&a[0],&a[i]);
		maxheap(a,0,heapsize);
	}
}
