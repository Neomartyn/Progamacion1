#include <stdio.h>
int a=5;
float b=13.546;
char c='A';
char d='a';

int main(){
    printf("a vale %d \n",a); //base decima
    printf("a vale %O \n",a); //Sin signo base 8
    printf("a vale %X \n",a); //Entero base 16 en mayuscula
    printf("a vale %f \n",a); //Flotante
    printf("a vale %c  \n",a); //Caracter

    printf("b vale %d \n",b);
    printf("b vale %5.2d \n",b);
    printf("b vale %f \n",b);
    printf("b vale %.1f \n",b); //Flotante con 1 decimal
    printf("b vale %.2f \n",b); //Flotante con 2 decimales
    printf("b vale %6.4f \n",b); //Flotante con 6 enteros y 4 decimales
    printf("b vale %6.1f \n",b); //Flotante con 6 enteros y 1 decimal
    printf("b vale %d \n",b);
    printf("b vale %O \n",b);
    printf("b vale %X \n",b);

    printf("c vale %d \n",c);
    printf("c vale %f \n",c);
    printf("c vale %c \n",c);
    printf("c vale %O \n",c);
    printf("c vale %X \n",c);

    printf("d vale %d \n",d);
    printf("d vale %f \n",d);
    printf("d vale %c \n",d);
    printf("d vale %O \n",d);
    printf("d vale %X",d);

    return (0);
}