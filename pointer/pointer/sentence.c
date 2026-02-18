#include<stdio.h>
void main()
{
    char sentence[25];
    printf("enter sentence=");
    gets(sentence);
    int i;
    FILE *fp;
    fp=fopen("sentence.txt","w");
    for(i=0;sentence[i]!='\0';i++)
    {
        fputc(sentence[i],fp);

    }
    printf("written successfully");
    fclose(fp);
}