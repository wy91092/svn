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
   (*L)->next=NULL;
   (*L)->data=0;
}

void create_link(int *a, pLink L, int len)
{
   int i=0;	
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
    while(L)
	{
	 printf("%3d",L->data);
	 L=L->next;
	}
	printf("\n");
	
}

void resolution_link(pLink L, pLink L1, pLink L2)
{
  int i=0;
  pLink p=L->next, ptail1=L1, ptail2=L2;
  pLink p1=NULL,p2=NULL;
  while(p)
  {  ++i;
     if(i%2==0)
	 {   p1=(pLink)malloc(sizeof(Link));
	      p1->data=p->data;
		  p1->next=NULL;
		 
		  ptail1->next=p1;
		  ptail1=p1;
	 }
	 else
	 {   p2=(pLink)malloc(sizeof(Link));
	     p2->data=p->data;
		 p2->next=NULL;
		 
		 ptail2->next=p2;
		 ptail2=p2;
	  }
	 p=p->next;
   }
   
}

int main()
{
 int a[10]={1,2,3,4,5,6,7,8,9,10};
 pLink L,L1,L2;
 init_link(&L);
 init_link(&L1);
 init_link(&L2);
 create_link(a, L, 10);
 print_link(L);

  resolution_link(L, L1, L2);
   print_link(L1);
   print_link(L2);
 return 0;
	
}


