#include<stdio.h>
void main()
{
        char name[15]="simran";
        int i;
        char ch;
        int k=0;
        FILE *fp;
        fp=fopen("name.txt","r");
        if(fp==NULL){
            printf("no such file found");
        }
        else{
for(i=0;i<10;i++)
{
    ch=fgetc(fp);
    printf("%c\n",ch);
}

        
//         while(!feof(fp))
//         {
//          ch=fgetc(fp);
//          if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
//          {
//    k++;
//          }
      

//          printf("%c",ch);

//         }
        // printf("no of alphabet=%d",k);
        fclose(fp);
    }
    }
