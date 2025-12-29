#include<stdio.h>
int main()
{
  
  int n,i,sum=0,add=0;
    printf("enter num=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (i%2==0)
        {
           sum=sum+i;
        }
        else{
          add=add+i;
          
        }
    }
    printf("sum of even numbers=%d\n",sum);
    printf("sum of odd numbers=%d\n",add);
}