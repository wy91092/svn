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

void create_link(pLink L, int *a, int len)
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
while(L!=NULL)
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

int list_length(pLink L)
{
   int i=0;
   pLink p=L->next;
   while(p)
   {
	 i++;
	 p=p->next;
	}
	return i;
}

int list_insert(pLink L, int i, int data)
{
	int j=1;
	pLink p,s;
	p=L;
	while(p&&j<i)
	{
	   p=p->next;	
		++j;
    }
	if(!p||j>i)  return 0;
	s=(pLink)malloc(sizeof(Link));
	s->data=data;
	s->next=p->next;
	p->next=s;
	return 1;
	
}



void merge_link(pLink L1, pLink L2, pLink L3)
{
    int aposition=0,bposition=0,k=-1;
	int len1,len2,len3;
	pLink a,b,c;
	a=L1;
	b=L2;
	c=L3;
	len1=list_length(L1);
	len2=list_length(L2);
	len3=list_length(L3);
	while(aposition<=len1&&bposition<=len2)
	{
	if(a->data<b->data)
	{
	list_insert(L3,k,a->data);
	aposition++;
	a=a->next;
    }
	else 
	{
	list_insert(L3, k, b->data);
	bposition++;
	b=b->next;
    }
	k++;
	}
	while(aposition<=len1)
	{
	  list_insert(L3, k, a->data);
	  a=a->next;
	  aposition++;
	  k++;
	}
	while(bposition<=len2)
	{
		list_insert(L3, k, b->data);
		b=b->next;
		bposition++;
		k++;
		
	}
	
}
int main()
{
	int a[5]={1,3,5,7,9};
	int b[5]={10,8,6,4,2};
	pLink L1,L2,L3,L4;
	
	init_link(&L1);
	init_link(&L2);
	init_link(&L3);
	init_link(&L4);
	create_link(L1, a, 5);
	print_link(L1);
	create_link(L2, b, 5);
    print_link(L2);
	reverse_link(L2, L3);
	print_link(L3);
	merge_link(L1, L3, L4);
	print_link(L4);
	return 0;
	
}
