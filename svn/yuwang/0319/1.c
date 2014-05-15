#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Node
{
   int data;
   struct Node *next;
}Link, *pLink;

void init_link(pLink *L)
{
  *L=(pLink)malloc(sizeof(Link));
  (*L)->next=NULL;
  (*L)->data=0;
}


void creat_link(int *a, pLink L, int n)
{
  int i;
  pLink pcur,ptail;
  ptail=(pLink)malloc(sizeof(Link));
  memset(ptail, 0, sizeof(Link));
  ptail=L;
  for(i=0;i<n;i++)
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


void reverse_link(pLink L1, pLink L2)
{
   pLink pcur=L1->next,tmp=NULL;
   while(pcur)
   {
	   tmp=(pLink)malloc(sizeof(Link));
       tmp->data=pcur->data;
	   tmp->next=NULL;

	   tmp->next=L2->next;
	   L2->next=tmp;
	   
	   pcur=pcur->next;
   }
}

pLink reverse1(pLink L)
{
   pLink p=L->next,r=NULL;
   L->next=NULL;
   while(p!=NULL)
   {
	 r=p->next;
	 p->next=L->next;
	 L->next=p;
	 p=r;
    }
	return L;
}

pLink reverse2(pLink L)
{
  pLink pre=NULL,p=L->next,r=p->next;
  p->next=NULL;
  while(r!=NULL)
  {
	  pre=p;
	  p=r;
	  r=r->next;
	  p->next=pre;
  }
  L->next=p;
	return L;
}


int main()
{
  int a[8]={1,2,3,4,5,6,7,8};
  pLink L1,L2;
  init_link(&L1);
  init_link(&L2);
  creat_link(a,L1,8);
  
  print_link(L1);
 // reverse_link(L1,L2);
  L1=reverse2(L1);
  print_link(L1);
  return 0;	
}
