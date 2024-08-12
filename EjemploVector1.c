#include<stdio.h>
int main(){
    int i=0;
    char txt[5];
    txt[0]='H';
    txt[1]='o';
    txt[2]='l';
    txt[3]='a';
    txt[4]='\0';
    /*printf("%c",txt[i++]);
    printf("%c",txt[i++]);
    printf("%c",txt[i++]);
    printf("%c",txt[i++]);        */
    for(i=0;txt[i]!=0;i++){
        printf("%c",txt[i]);
    }
    return 0;
}