/*************************************************************************
	> File Name: merge.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Sun 30 Mar 2014 09:10:12 PM CST
 ************************************************************************/
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define SIZE 10
void merge(int *a, int n)
{
    int i,j,k;
    int low=0,high=n-1;
	int mid=(low+high)/2;
	int *b=(int *)malloc(sizeof(int)*(SIZE+1)	) ;
	for(k=low;k<=high;k++)
	{
	  b[k]=a[k];
	}
	for(i=low,j=mid+1,k=i;i<=mid&&j<=high;k++)
	{
	  if(b[i]<b[j])  a[k]=b[i++];
	  else a[k]=b[j++];
    }
    while(i<=mid)  a[k++]=b[i++];
    while(j<=high)  a[k++]=b[j++];
}
void merge_sort(int *a, int n)
{
   int low=0,high=n-1;
   if(low<high)
   {
     int mid=(low+high)/2;
	     merge_sort(a,mid);
         merge_sort(a+mid+1,high-mid-1);
         merge(a,n/2);
   }
}
void print_(int *a, int n)
{
   int i;
   for(i=0;i<n;i++)
   {
   printf("%3d",a[i]);
   }
   printf("\n");
}

int main()
{
  int i;
  srand(time(NULL));
  int *a=(int *)malloc(sizeof(int)*SIZE	) ;
  for(i=0;i<10;i++)
  {
    a[i]=rand()%100;
  }
  printf("before sort:\n");
  print_(a,SIZE);
  merge_sort(a,SIZE);
  printf("after sort: \n");
  print_(a,SIZE);

}

