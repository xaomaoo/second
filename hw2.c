#include<stdio.h>
int main()
{
    int n,i,mul=0;
    printf("enter a number=");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        mul=i*n;
        printf("%d\t",mul);
    }
}