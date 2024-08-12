//Con repetición continua hasta querer salir con 0
#include <stdio.h>
#include <math.h>
#define PI 3.14
#define CUAD(x) (x*x)

int main(){
    float radio,area;
    printf("Bienvenido al programa que....\n");
    do{
        printf("Ingrese el radio (positivo para calcular o cero para salir):\n");
        scanf("%f",&radio);
        while(radio<0){
            printf("Error radio invalido por favor ingreselo nuevamente\n");
            scanf("%f",&radio);
        }
        if(radio!=0){
            area=CUAD(radio)*PI;
            printf("El area de la circunferencia cuyo radio es: %.2f vale: %.2f\n",radio,area);
        }
    }while(radio!=0);
   
    // area=pow(radio,2)*PI;
   
    return 0;
}