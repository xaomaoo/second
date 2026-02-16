#include<stdio.h>
void main()
{
int i;
char name[15]="simran";
FILE *fp;
fp=fopen("name.txt","w");
for(i=0;name[i]!='\0';i++)
{
    fputc(name[i],fp);
}
printf("written successfully");
fclose(fp);
}