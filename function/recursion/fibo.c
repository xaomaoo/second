#include<stdio.h>
int findFibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return findFibo(n-1)+findFibo(n-2);
    }

}
void main()
{
    int fibovalue=findFibo(4);
    printf("fibo=%d",fibovalue);
}