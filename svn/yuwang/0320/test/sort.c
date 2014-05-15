#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int *a, int *b)
{
  int tmp=*a;
     *a=*b;
	 *b=tmp;
}
void bubble_sort(int *a, int len)
{
   int i=0,j=0;	
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
		  	if(a[j]>a[j+1])
			{
			 swap(&a[j],&a[j+1]);	
			}
		}
	}
}
void insert_sort(int *a, int len)
{
   int i=0,j=0,t;
   for(i=1;i<len;i++)
   {
      if(a[i]<a[i-1])
	  {t=a[i];
	  for(j=i-1;a[j]>t;j--)
	  {a[j+1]=a[j];
	  a[j]=t;
	  }
     }	   
	   
	   
   }
	
}
void select_sort(int *a, int len)
{
    int i=0,j=0,min;
	for(i=0;i<len-1;i++)
	{
	   min=i;
	   for(j=i+1;j<len;j++)
	   {
	    if(a[min]>a[j])  min=j;	   
	   }
		if(min!=i) swap(&a[i],&a[min]);
	}
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

void quick_sort(int *a, int len)
{
    int lo=0,hi=len-1,k;
	if(lo<hi)
	{
	  k=partition(a,len);
	   quick_sort(a,k);
	   quick_sort(a+k+1,len-k-1);
	}
	
}


void maxheap(int *a, int len, int i)
{
   int left,right,largest;
   left=2*i+1;
   right=2*i+2;
   if(left<len&&a[left]>a[i]) largest=left;
   else largest=i;

   if(right<len&&a[right]>a[largest]) largest=right;

   if(largest!=i)
   {
	swap(&a[i],&a[largest]);   
	   maxheap(a,len,largest);
	}
	
}

void heap_sort(int *a, int len)
{
 int i;
 for(i=(len-2)/2;i>=0;i--)
 {
    maxheap(a,len,i);	 
}
	for(i=len-1;i>=1;i--)
	{
	swap(&a[i],&a[0]);
	len--;
	maxheap(a,len,0);
	}
}

void print_(int *a, int len)
{
  int i=0;
  for(i=0;i<len;i++)
	  printf("%3d",a[i]);

  printf("\n");
	
}
int main()
{
  int a[10]={5,8,2,7,4,9,1,3,10,6};
  insert_sort(a,10);
  print_(a,10);
  select_sort(a,10);
  print_(a,10);
  bubble_sort(a,10);
  print_(a,10);
  quick_sort(a,10);
  print_(a,10);
  heap_sort(a,10);
  print_(a,10);
	return 0;
	
}
