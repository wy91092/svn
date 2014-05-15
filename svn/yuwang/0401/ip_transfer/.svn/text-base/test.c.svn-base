/*************************************************************************
	> File Name: test.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 01 Apr 2014 06:31:39 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main()
{
    char ip[]="58.217.200.15";
 
	struct in_addr myaddr;
	/*   inet_aton */
	int iRet =inet_aton(ip, &myaddr);
	printf("%08x\n",myaddr.s_addr);

	/* inet_addr */
	printf("%08x\n", inet_addr(ip));

	/*inet_pton */
	iRet=inet_pton(AF_INET, ip, &myaddr);
	printf("%08x\n", myaddr.s_addr);

	myaddr.s_addr=0x0fc8d93a;
	/*inet_ntoa*/
	printf("%s\n", inet_ntoa(myaddr));

	/*inet_ntop*/
	inet_ntop(AF_INET, &myaddr, ip, 16);
	puts(ip);
	
	return 0;



}
