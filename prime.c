#include<stdio.h>
int main()
{
    int i,n,k=0;

    printf("enter a number=");
    scanf("%d",&n);
    for(i=1;i>=n;i++)
    {
if(n%i ==0)
{
    k++;
}
    }
    if(k<=2)
    {
        printf("prime");
    }
    else{
        printf("composite");
    }
    return 0;
}