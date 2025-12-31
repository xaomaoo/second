#include<stdio.h>
int main()
{
    int size,i;

   printf("enter size of an array=");
   scanf("%d",&size);
   int arr[size];
   printf("enter any %d elements",size);
   for(i=0;i<size;i++)
   {
    scanf("%d",&arr[i]);
    
   }
   int largest=arr[0];
   for(i=0;i<size;i++)
   {
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
   }
 printf("Largest value=%d\n",largest);
   int sec_largest=arr[0];
   for(i=0;i<size;i++)
   {
    if (arr[i]!=largest && arr[i]>sec_largest)
    {
        sec_largest=arr[i];
    } 
   }
   printf("second largest num is %d",sec_largest);
 return 0;
}