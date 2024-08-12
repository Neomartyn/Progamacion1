#include<stdio.h>
int n1;
int main(){
    printf("Ingresar 1 numero entero\n");
    scanf("%d",&n1);
    if(n1%2==0){
        printf("El nro es par");
    }
    else{
        printf("El nro es impar");
    }
    return 0;
}