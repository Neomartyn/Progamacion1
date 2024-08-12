
#include <stdio.h>
#include <math.h>
int main()
{   
    float cateto1,cateto2,hipotenusa;
    printf("Ingresar el valor de cateto1 en cm\n");
    scanf("%f", &cateto1);

    printf("Ingresar el valor de cateto2 en cm\n");
    scanf("%f", &cateto2);

    hipotenusa=sqrt(cateto1*cateto1*cateto2*cateto2);
    printf("El valor de la hipotenusa es: %f cm", hipotenusa);
    return 0;

}       