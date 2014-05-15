#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubble(int *a, int len)
{
  int i=0,j=0,tmp;
  for(i=0;i<len;i++)
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


int main()
{  int i;
   int a[5]={6,2,8,4,9};
   bubble(a,5);
   for(i=0;i<5;i++)
   {
     printf("%3d",a[i]);	   
   }
   printf("\n");
	return 0;

}
