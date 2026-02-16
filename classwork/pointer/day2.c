#include<stdio.h>
void main()
{
        char n;
        FILE *fp;
        fp=fopen("name.txt","r");
        while(!feof(fp))
        {
         n=fgetc(fp);
         printf("%c",n);

        }
        fclose(fp);
    }
