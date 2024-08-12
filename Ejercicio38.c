#include<stdio.h>
char op;
int num1,num2;
float resul;
int main(){
    printf("Ingrese el primer numero para operar\n");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero para operar\n");
    scanf("%d",&num2);
    printf("Ingrese la letra para realizar las siguientes operaciones\n");
    printf("S-Suma\n");
    printf("R-Resta\n");
    printf("M-Multipliacion\n");
    printf("D-Division\n");
    fflush(stdin);//vacia el buffer de entrada antes de pedir el caracter
    scanf("%c",&op);
    switch (op)
    {
    case 's': {
        resul=num1+num2;
        printf("El resultado de la suma es %f",resul);
    }
        break;
    case 'r': {
        resul=num1-num2;
        printf("El resultado de la suma es %f",resul);
    }
        break;
    case 'm': {
        resul=num1*num2;
        printf("El resultado de la multiplicacion es %f",resul);
    }
        break;
    case 'd': {
        if(num2!=0){
            resul=num1/num2;
        printf("El resultado de la division es %f",resul);
        }
        else {printf("No se pude dividir por cero");
            }
        break;
    default: printf("La opcion no es valida");
        break;
                }
    return 0;
    }
}