#include<stdio.h>
int main()
{
    int i,j;
    int arr[2][3]={{28,18,40},{32,55,38}};

for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
}
}
