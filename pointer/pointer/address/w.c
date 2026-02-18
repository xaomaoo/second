#include<stdio.h>
void main()
{
    int i;
    char add[20];
    printf("enter address=");
    scanf("%s",add);
    FILE *fp;
    fp=fopen("address.txt","w");
    for(i=0;add[i]!=0;i++)
    {
        fputc(add[i],fp);

    }
    printf("written successfully");
    fclose(fp);
}