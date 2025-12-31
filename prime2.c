#include<stdio.h>
int main()
{
    int n,j,k,i;
    printf("enter the range to prime number=");
    scanf("%d",&n);
     printf("prime numbers are: ");
    for(i=2;i<=n;i++)
    {   
        k=0;
        for(j=1 ;j<=i;j++)
        {
        if(i%j==0)
        {
            k++;
        }
    }

    if(k==2)
    {
        printf(" %d\t",i);
    }
}
return 0;
}