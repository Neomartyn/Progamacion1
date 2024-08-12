#include<stdio.h>
int basico=4500, antiguedad,horas;
float neto;
int main(){
    printf("Ingresar la cantidad de horas trabajas\n");
    scanf("%d",&horas);
    printf("Ingresar la antiguedad\n");
    scanf("%d",&antiguedad);
    neto=(basico*horas)+(basico*(1+antiguedad*2/100));
    printf("El sueldo neto es %f",neto);
    return 0;
}