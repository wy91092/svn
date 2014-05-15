#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void selectsort(int *a, int len)
{
   int min,i,j,tmp;
   for(i=1;i<len-1;i++)
   {  min=i;
    for(j=i+1;j<len;j++)
	{
		if(a[j]<a[min]) min=j;
	}
      if(min!=i)
	  {  tmp=a[min];
		  a[min]=a[i];
		  a[i]=tmp;
	  } 
	 
   }
}

int main()
{
 int i;
 int a[]={1,6,4,8,5};
 selectsort(a,5);
 for(i=0;i<5;i++)
	 printf("%3d",a[i]);
 printf("\n");
 return 0;

}
