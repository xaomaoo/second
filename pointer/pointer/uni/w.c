#include<stdio.h>
void main()
{
    char name[15]="tribhuwan uni";
    int i;
    FILE *fp;
    
    fp=fopen("tu.txt","w");
   for(i=0;name[i]!='\0';i++)
   {
    fputc(name[i],fp);
   }
   printf("written successfully");
   fclose(fp);

}