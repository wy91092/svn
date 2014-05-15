#include"1.h"

int score_count(char *file_in, char *file_out )
{
    FILE *fp_in,*fp_out;
    char line[50];
	int index,num=0;
	float score_sum,score_count,stu_score[5];
	fp_in=fopen(file_in,"r");
	fp_out=fopen(file_out,"w");
    if(!fp_in||!fp_out)
	{
	   printf("fopen\n");	
	   return 0;
	}
    while(memset(line, 0, sizeof(line)),fgets(line, 50, fp_in)!=NULL)
	{
	 score_count=sscanf(line,"%f%f%f%f%f",&stu_score[0],&stu_score[1],&stu_score[2],&stu_score[3],&stu_score[4]);
	 score_sum=0;
	 for(index=0;index<score_count;index++)
	 {
	   score_sum+=stu_score[index];	 
	 }
	 fprintf(fp_out,"%.1f <-number: %d\n",score_sum/score_count,++num);
    }
	fclose(fp_in);
	fclose(fp_out);

}

