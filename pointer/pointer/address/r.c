#include<stdio.h>
void main()
{
    char add,vow=0,con=0;
    FILE *fp;
    fp=fopen("address.txt","r");
    while(!feof(fp)){
        add=fgetc(fp);
        printf("%c",add);
        if(add=='a'||add=='i'||add=='o'||add=='u'||add=='e')
        {
            vow++;
        }
        else
        {
            con++;
        }
    }
    printf("consonant=%d",con);
    printf("vowel=%d",vow);
    fclose(fp);

}