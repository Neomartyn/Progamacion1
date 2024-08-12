#include <stdio.h>

#define PI 3.14


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

    area=radio*radio*PI;

    printf("El area de la circunferencia cuyo radio es: %.2f vale: %.2f",radio,area);

    

    return 0;

}