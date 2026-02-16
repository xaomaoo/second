#include<stdio.h>
#include<string.h>
int main()
{
    int len,len2,len3;
char  name1[10]="dohwa",name2[10]="eunhyuk",name3[10]="soae";
 len=strlen(name1);
 len2=strlen(name2);
 len3=strlen(name3);
 if(len!=len2 &&len!=len3&&len2!=len3){
if( len> len2 &&  len>len3){
 printf("1st string is greatest");
}
else if(len2>len3 && len2>len)
{
    printf("2nd string is greater");
}
else{
    printf("3rd string is greater");
}
 }
 else{
    printf("same cannot find");
 }
}