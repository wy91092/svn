#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 10

void swap(int *a, int *b)
{
  int tmp=*a;
     *a=*b;
	 *b=tmp;
	
}


void maxheap(int *a, int heapsize, int i)
{
    int left,right,largest;
    left=2*i+1;
    right=2*i+2;
	if(left<heapsize&&a[left]>a[i]) largest=left;
	else   largest=i;
	if(right<heapsize&&a[right]>a[largest]) largest=right;
	
	if(largest!=i)
	{
	   swap(&a[i],&a[largest]);
	   maxheap(a, heapsize, largest);
    }
	
}

void heapsort(int *a, int heapsize)
{
   int i;
   for(i=(heapsize-2)/2;i>=0;i--)
   {
       maxheap(a, heapsize, i);	   
   }

   for(i=heapsize-1;i>=1;i--)
   {
      swap(&a[0],&a[i]);
	  heapsize--;
	  maxheap(a, heapsize, 0);
   }
}

int main()
{
  int a[SIZE]={16,4,10,13,8,5,2,3,1,7};
  int i,heapsize;
  heapsize=SIZE;
  heapsort(a, heapsize);

  for(i=0;i<SIZE;i++)
	  printf("%3d",a[i]);

  printf("\n");
  return 0;
	
	
}
