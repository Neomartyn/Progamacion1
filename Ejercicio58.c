#include<stdio.h>
int potencia(int,int);
int main(){
    int base,exponente,pote;
    printf("Ingrese la base de la potencia\n");
    scanf("%d",&base);
    printf("Ingrese el exponente de la potencia\n");
    scanf("%d",&exponente);
    pote=potencia(base,exponente);
    printf("El resultado es %d",pote);
    return 0;

}

int potencia(int base,int exponente){
int resul=1;
do{
    resul=base*resul;
    exponente=exponente-1;
}
while (exponente>0);
return resul;
}
