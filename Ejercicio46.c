#include<stdio.h>
int a,multiplicando=0,tabla;
int main(){
    printf("Ingresar un numero entero\n");
    scanf("%d",&a);
    while (a>10)
    {
        printf("El valor debe ser entre 0 y 10\n");
        printf("Intente nuevamente\n");
        scanf("%d",&a);
    }
    printf("El numero ingresado es %d\n",a);
    printf("La tabla de multiplicacion del %d es\n",a);
    do{
        tabla=a*multiplicando;
        printf("%d X %d = %d\n",a,multiplicando,tabla);
        multiplicando=++multiplicando;
    }while(multiplicando<11);
    return 0;
}