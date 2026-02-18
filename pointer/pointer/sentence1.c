#include<stdio.h>
void main()
{
    char ch;
    FILE *fp,*vp,*cp;
    fp=fopen("sentence.txt","r");
    vp=fopen("vowel.txt","w");
    cp=fopen("consonant.txt","w");
    while(!feof(fp)){
        ch=fgetc(fp);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            fputc(ch,vp);
        }
        else{
            fputc(ch,cp);
        }
        
    }
    printf("written in vowel and consonant successfully");
    fclose(cp);
    fclose(vp);
    fclose(fp);
}