#include<stdio.h>
float R,A;
const float PI=3.14;
int main(){
    printf("Ingresar el valor del radio\n");
    scanf("%f",&R);
    A=R*R*PI;
    printf("El valor del area es %f",A);
    return 0;
}