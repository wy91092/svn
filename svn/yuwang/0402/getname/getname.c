/*************************************************************************
	> File Name: getname.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 01 Apr 2014 10:07:39 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<netdb.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
   char *host, **names, **addrs;
   struct hostent *hostinfo;
   if(argc==1)
   {
      char myname[256];
      gethostname(myname, 255);
      host=myname;
   }
   else  host=argv[1];

   hostinfo=gethostbyname(host);
   if(!hostinfo)
   {
     fprintf(stderr, "cannot get info for host: %s\n", host);
     exit(1);
   }
   printf("results for host %s :\n", host);
   printf("Name: %s\n", hostinfo ->h_name);
   printf("Aliases: ");
   names=hostinfo->h_aliases;
   while(*names)
   {
      printf("%s", *names);
      names++;
   }
   printf("\n");
   if(hostinfo->h_addrtype != AF_INET)
   {
      fprintf(stderr, "not an IP host !\n");
      exit(1);
   }
   addrs=hostinfo ->h_addr_list;
   while(*addrs)
   {
      printf("%s\n", inet_ntoa(*(struct in_addr *)* addrs));
      addrs++;
   }
   printf("\n");
   exit(0);
}
