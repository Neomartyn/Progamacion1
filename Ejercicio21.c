#include<stdio.h>
int formato;
int DD,MM,AAAA;
int main(){
    printf("Escribir fecha en dia, mes y ano en el formato DDMMAAAA\n");
    scanf("%d",&formato);
    AAAA=formato%10000;
    DD=formato/1000000;
    MM=(formato/10000)%10;
    printf("Dia %d\n",DD);
    printf("Mes %d\n",MM);
    printf("Ano %d\n",AAAA);
    return 0;
}