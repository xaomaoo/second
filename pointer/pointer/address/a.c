#include<stdio.h>
void main()
{
    int i;
    FILE *fp;
    char addr[15];
    printf("enter address=");
    scanf("%s",addr);
    char ch;
    fp=fopen("address.txt","a");
    if(fp==NULL){
        printf("no such file found");
    }
    else{
        for(i=0;addr[i]!='\0';i++)
        {
            fputc(addr[i],fp);
        }
    }
    fclose(fp);
}