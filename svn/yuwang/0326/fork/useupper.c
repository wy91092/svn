/*************************************************************************
	> File Name: useupper.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Wed 26 Mar 2014 08:11:36 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  char *filename;

  if(argc!=2)
  {
  fprintf(stderr, "usage:useupper file\n");
  exit(-1);
  }
  filename=argv[1];

  if(!freopen(filename, "r", stdin))
  {
  fprintf(stderr, "could not redirect stdin from file %s\n",filename);
  exit(2);
  }

  execl("./upper", "upper", 0);

  perror("could not exec ./upper");
  exit(3);
}
