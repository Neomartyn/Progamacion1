#include<stdio.h>
float val1, val2;
float suma, resta, producto, division, promedio, doble;
int main(){
    printf ("Ingresar valor 1\n");
    scanf ("%f",&val1);
    printf ("Ingresar valor 2\n");
    scanf ("%f",&val2);
    suma=val1+val2;
    resta=val1-val2;
    producto=val1*val2;
    division=val1/val2;
    promedio=(val1+val2)/2;
    doble=(val1*2)*2-(val2/2);
    printf ("resultado suma %0.2f\n",suma);
    printf ("resultado resta %0.2f\n",resta);
    printf ("resultado producto %0.2f\n",producto);
    printf ("resultado divisio %0.2f\n",division);
    printf ("resultado promedio %0.2f\n",promedio);
    printf ("resultado doble %0.2f\n",doble);
    return 0;
}