#include<stdio.h>
int numero=0,positivos=0,negativos=0,contador=0;
int main(){
    printf("Ingrese un numero entero o cero para salir\n");
    scanf("%d",&numero);
    while(numero!=0){
        contador=contador+1;
            if(numero>0){
                positivos=positivos+1;
            }
            else{
                negativos=negativos+1;
            }
        printf("Ingrese un numero entero o cero para salir\n");
        scanf("%d",&numero);
    }
    printf("Se ingreso un cero\n");
    printf("Se ingresaron %d de los cuales %d son positivos y %d son negativos",contador,positivos,negativos);
}