/*************************************************************************
	> File Name: test.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Tue 01 Apr 2014 04:42:23 PM CST
 ************************************************************************/

#include<stdio.h>
int main()
{
  unsigned int uiTest;
  unsigned char *pucTmp =NULL;
  uiTest=0x12345678;
  pucTmp=(unsigned char *)&uiTest;
  if(*pucTmp==0x78)
  {
  printf("this is little Endian\n");
  }else
  {
  printf("this is big Endian\n");
  }
  return 0;
}
