/*************************************************************************
	> File Name: read_dir.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 24 Mar 2014 11:15:44 AM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
  DIR *pDir;
  char line[128];
  struct dirent* pDirEnt ;
  pDir=opendir(argv[1]);
  if(pDir==NULL)
  {
   printf("opendir \n");
   exit(-1);
  }
  while((pDirEnt=readdir(pDir))!=NULL)
  {
      memset(line , 0, 128);
      sprintf(line, "Dir_TYpe:%c,Dir_name:%s\n",pDirEnt->d_type,pDirEnt->d_name);
	  fputs(line, stdout );
  
  }
  closedir(pDir);
  return 0;
}
