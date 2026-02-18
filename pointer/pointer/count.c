#include<stdio.h>
void main()
{
    int k=0,vow=0;
    char n;
    FILE *fp;
    fp=fopen("name.txt","r");
    while(!feof(fp)){
        n=getc(fp);
        k++;
        printf("%c",n);
        if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
        {
            vow++;
        }
    }
    printf("%d",k-1);
    printf("vowel =%d",vow);
    fclose(fp);
}