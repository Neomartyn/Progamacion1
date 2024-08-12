#include<stdio.h>
float centi, pulgadas;
int pies;
int main(){
    printf ("Ingresar cantidad de centimetros\n");
    scanf ("%f",&centi);
    pulgadas=centi*0.394;
    pies=centi*0.0328;
    printf("Corresponde a %f pulgadas\n",pulgadas);
    printf("Corresponde a %d pies",pies);

    return 0;
}