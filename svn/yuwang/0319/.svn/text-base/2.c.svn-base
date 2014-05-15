#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   int num;
   int i=0;
   int count=0;
   char str[20];
   printf("please input a number:\n");
   scanf("%d",&num);
   while(num)
   {
	   str[i]=(num%10)+'0';
	   i++;
	   num=num/10;
	}
	count=i-1;
	str[i]='\0';
	for(i=0;i<count/2;i++)
	{
	  char temp;
	  temp=str[i];
	  str[i]=str[count-i];
	  str[count-i]=temp;
	}
	printf("%s\n",str);
   return 0;
}
