#include <stdio.h>
int main()
{
    float radio, area;
    const float PI=3.14;
    printf ("Bienvenido al programa\n");
    printf("Ingrese el radio de la circunferencia en mm\n");
    scanf("%f", &radio);
    area=radio*radio*PI;
    printf ("El area es %f mm\n")
    printf("%f",area);
    return 0;
}