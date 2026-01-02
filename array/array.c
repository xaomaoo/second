#include<stdio.h>
int main()
{
    
    int size,i,j,temp;
    printf("enter the size of array");
   
        scanf("%d",&size);
  int arr[size];
  for(i=0;i<size;i++)
  {
    printf("enter the array");
    scanf("%d",&arr[i]);
  }
    for(i=0;i<size;i++)
    {
for(j=i;j<size;j++)
{
    if(arr[i]>arr[j])

    {
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
    }
}
    printf("after %d pass %d",i+1,arr[i]);
}
printf("after sorting \n");
for(i=0;i<size;i++){
    printf("%d\t",arr[i]);
}
    
    return 0;

}