#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"sort.h"
int main(int argc, char *argv[])
{
	int top=atoi(argv[2]);
	int size=atoi(argv[1]);
	int index;
	int *arr=(int *)malloc(sizeof(4* size));
	memset(arr, 0, size*4);
	srand(time(NULL));
	for(index=0;index<size;index++)
	{
		arr[index]=rand()%1000;
		
	}
	heap_sort(arr ,size);
	for(index=0;index<top;index++)
	{
	 printf("%d\t",arr[index]);	
		
	}
	printf("\n");
}
