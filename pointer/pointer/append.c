#include<stdio.h>
void main()
{
int i;
FILE *fp;
char caste[15]="rajbahak";
char ch;
fp=fopen("name.txt","a");
if(fp==NULL){
    printf("no such file found");
}
else{
    for(i=0;caste[i]!='\0';i++)
    {
        fputc(caste[i],fp);

    }
}
fclose(fp);
}