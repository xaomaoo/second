#include<stdio.h>
int main()
{
    int space,i,j,k=0,star=7;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=k;j++)
        {

        printf(" ");
        }
        for(j=1;j<=star;j++)
        {
            printf("* ");
        }
        printf("\n");
        k=k+2;
        star=star-2;
        

    }
    return 0;
}