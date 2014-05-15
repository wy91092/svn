#include "1.h"

void init(pLink *L)
{
  *L=(pLink)malloc(sizeof(Link));
  (*L)->next=NULL;
	(*L)->data=0;
}

void create_tail(pLink L, int *a,int len)
{
   int i=0;
   pLink pcur=NULL,ptail=L;
   for(i=0;i<len;i++)
   {
    pcur=(pLink)malloc(sizeof(Link));
	pcur->data=a[i];
   ptail->next=pcur;
   ptail=pcur;
   }
}

void create_head(pLink L, int *a,int len)
{
   int i=0;
   pLink pcur=NULL,phead=L;
   for(i=0;i<len;i++)
   {
     pcur=(pLink)malloc(sizeof(Link));
	 pcur->data=a[i];
     pcur->next=phead->next;
	 phead->next=pcur;
   }
}

void reverse1(pLink L)
{
   pLink p=L->next,q=NULL;
   L->next=NULL;
   while(p!=NULL)
   {
    q=p->next;
	p->next=L->next;
	L->next=p;
	p=q;   
   }
}
void reverse2(pLink L)
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

}

void reverse3(pLink L)
{
 pLink p=L->next,q=NULL;
      L->next=NULL;
	  p->next=L;
	  q=p;
	  while(p->next!=NULL)
	  {
	  reverse3(q);
	  }
	  
}
void print(pLink L)
{
  L=L->next;
  while(L)
  {
   printf("%3d",L->data);
   L=L->next;
 }
  printf("\n");
		
}
