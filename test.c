#include<stdio.h>
int main() {
int n,i,count;
printf("enter number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
if(n%i==0)
{
    count++;
}

if(count>2){


printf("composite");
}
else{
    printf("prime");
}
}
