/*************************************************************************
	> File Name: printdir.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Thu 03 Apr 2014 08:55:08 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<dirent.h>
#include<string.h>
#include<sys/stat.h>
#include<stdlib.h>

void printdir(char *dir, int depth)
{
   DIR *dp;
   struct dirent *entry;
   struct stat statbuf;

   if((dp=opendir(dir))==NULL)
   {
      fprintf(stderr, "cannot open directory: %s\n", dir);
	  return ;
   }
   chdir(dir);
   while((entry=readdir(dp))!=NULL)
   {
      lstat(entry->d_name, &statbuf);
	  if(S_ISDIR(statbuf.st_mode))
	  {
	     if(strcmp(".", entry->d_name)==0||strcmp("..", entry->d_name)==0)
			 continue;
		 printf("%*s%s/\n", depth,"", entry->d_name);
		 printdir(entry->d_name, depth+4);
	  }
	  else printf("%*s%s/\n", depth,"", entry->d_name);
   }
   chdir("..");
   closedir(dp);
}
int main(int argc, char *argv[])
{
   printf("Directory scan of %s\n", argv[1]);
   printdir(argv[1], 0);
   printf("done. \n");
   exit(0);
}
