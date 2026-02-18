#include<stdio.h>
void main()
{
    char ch;
    FILE *fp,*funi,*vp,*cp;
    fp=fopen("tu.txt","r");
    funi=fopen("uni.txt","w");
    vp=fopen("vowel.txt2","w");
    cp=fopen("consonant.txt2","w");
    while(!feof(fp)){
        ch=fgetc(fp);
        fputc(ch,funi);

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            fputc(ch,vp);
        }
        else{
            fputc(ch,cp);
        }
    }
    printf("written successfully");
    fclose(cp);
    fclose(vp);
    fclose(funi);
    fclose(fp);
}