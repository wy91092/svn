/*************************************************************************
	> File Name: memcpy.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Fri 25 Apr 2014 10:27:06 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

struct {
    char name[40];
    int age;
}person, person_copy;

int main()
{
  char myname[]="Pierre de Fermat";

  memcpy(person.name, myname, strlen(myname)+1);
  person.age=48;

  memcpy(&person_copy, &person, sizeof(person));
  printf("peron_copy: %s, %d\n",person_copy.name,person_copy.age);
  return 0;

}
