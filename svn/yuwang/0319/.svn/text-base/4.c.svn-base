#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node
{
    int data;
	struct Node *next;
}Link,*pLink;

void init_link(pLink *L)
{
   *L=(pLink)malloc(sizeof(Link));
   (*L)->data=0;
   (*L)->next=NULL;
}

void create_link(pLink L, int *a, int len)
{
   int i;	
   pLink ptail,pcur;
   ptail=(pLink)malloc(sizeof(Link));
   memset(ptail, 0, sizeof(Link));
   ptail=L;
   for(i=0;i<len;i++)
   {
     pcur=(pLink)malloc(sizeof(Link));
	 memset(pcur, 0, sizeof(Link));
	 pcur->data=a[i];
	 ptail->next=pcur;
	 ptail=pcur;
	}
}

void print_link(pLink L)
{   
	L=L->next;
    while(L!=NULL)
	{
	   printf("%3d",L->data);
	   L=L->next;
    }
	printf("\n");
}
void delete_same_num(pLink L1, pLink L2)
{
  pLink pre=L1,p1,p2,tmp;
  tmp=NULL;
 // p1=L1->next;
  p2=L2->next;
  while(p2!=NULL)
  {   p1=L1->next;
      pre=L1;
	  while(p1!=NULL)
	  {  
   	    if(p2->data==p1->data&&p1->next!=NULL)
	    {  tmp=p1;
	       pre->next=p1->next;
	       free(tmp);
     	}
	  else
	    {
	    pre=pre->next;
	    }
	 
	    p1=p1->next;
   	  }
    p2=p2->next;
  }
   
	
}

int main()
{
   int a[9]={1,2,3,4,5,6,7,8,9};
   int b[5]={1,2,4,6,8};
   pLink L1,L2;
   init_link(&L1);
   init_link(&L2);
   create_link(L1, a, 9);
   create_link(L2, b, 5);
 //  L1=L1->next;
   print_link(L1);
  // printf("\n");
 //  L2=L2->next;
   print_link(L2);
   

   delete_same_num(L1, L2);
   print_link(L1);
   return 0;
}
