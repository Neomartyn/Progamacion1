#include<stdio.h>
int tablaDeMultiplicar(int);
int nro,aux=0,resul;
int main(){
    printf("Ingrese el numero para mostrar la table de multiplicacion del 1 al 10");
    scanf("%d",nro);
    while (aux>11)
    {
        resul=tablaDeMultiplicar(int nro);
        printf("%d x %d = %d",aux,nro,resul);
    }
    return 0;
}
int tablaDeMultiplicar(int nro){
    
}