#include<stdio.h>
int n1,n2;
int main(){
    printf("Ingresar 2 numeros enteros\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1==n2){
        printf("Los numeros son iguales");
    }
    else{
        printf("Los numero no son iguales");
    }
    return 0;
}