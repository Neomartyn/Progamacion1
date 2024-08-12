#include <stdio.h>
#include <math.h>
#define PI 3.14
#define CUAD(x) (x*x)

int main(){
    float radio,area;
    printf("Bienvenido al programa que....\n");
    do{
        printf("Ingrese el radio:\n");
        scanf("%f",&radio);
        if(radio<=0){
            printf("Error radio invalido\n");
        }
    }while(radio<=0);
   // area=pow(radio,2)*PI
    area=CUAD(radio)*PI;
    printf("El area de la circunferencia cuyo radio es: %.2f vale: %.2f",radio,area);
   
    return 0;
}