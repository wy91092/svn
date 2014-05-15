/*************************************************************************
	> File Name: byte_reverse.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 01 Apr 2014 03:01:58 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int  reverse(int src)
{
   int b;
   b=((src & 0xff)<<24)| ( (src &0xff000000)>>24 ) | ((src& 0xff00)<<8) | ((src&0xff0000)>>8);
   return b;
}
void ntoa(int ip, char *ip_addr)
{
   memset(ip_addr, 0, strlen(ip_addr));
   int a[4], index;
   for(index=0;index<4;index++)
   {
      a[index]=(int)(ip & 0xff);
	  ip= ip>>8;
   }
   sprintf(ip_addr, "%d.%d.%d.%d", a[0], a[1], a[2], a[3]);

}
int aton(char *ip_addr)
{
   int buf[4];
   memset(buf, 0, 16);
   sscanf(ip_addr, "%d.%d.%d.%d",&buf[0],&buf[1],&buf[2],&buf[3]);
   int index=0,result=0;
   for(;index<4;index++)
   {
     result |=(buf[index] & 0xff);
	 if(index<3)
	 {
	 result=result<<8;
     }
   }
   return result;
}
int main()
{
   int a=0x0fc8d93a;
   int b;
   char buf[128];
   printf("before: %08x\n", a);
   b=reverse(a);
   printf("after:%08x\n", b);
   ntoa(a, buf);
   printf("ip_addr: %s\n",buf);
   int c=aton(buf);
   printf("ip:%08x\n", c);
   return 0;
}
