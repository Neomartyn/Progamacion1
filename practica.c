#include <string.h>
#include <stdio.h>
#define MAX 100

void printlong(char txt[]);
int main(void){
    char txt[]="hola";
    //char txt[][5]=
    printf("%s",txt);
    //printlong(txt);
    //printf ("Longitud del vector: %d\n",strlen(txt));
    return 0;
}

//void printlong(char txt[]){
  //  printf ("Longitud del vector: %d\n",sizeof(txt));
//}