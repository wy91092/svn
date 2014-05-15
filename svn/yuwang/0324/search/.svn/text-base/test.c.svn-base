/*************************************************************************
	> File Name: test.c
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 24 Mar 2014 09:59:30 PM CST
 ************************************************************************/

#include"search.h"

int main(int argc, char *argv[])
{
   char line[1024];
   FILE *fp;
   int word_num=0;
   fp=fopen(argv[1],"rb");
   while(fgets(line, 1024, fp)!=NULL)
   {
      init(line); 
     word_num+= show_word(line);   
   }
   show_line(argv[1]);

   printf("word_num=%d\n",word_num);
   printf("OK~\n");
   fclose(fp);
   return 0;
}

