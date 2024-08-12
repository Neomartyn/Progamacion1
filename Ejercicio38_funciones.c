#include<stdio.h>
int ingresar_datos(void);
int op(char,int,int);
int sumar(int,int);
int resta(int,int);
int multi(int,int);
int divi(int,int);
void resultado(int);

int main(){
    int num1,num2,resul;
    char op;
    num1=ingresar_datos();
    num2=ingresar_datos();  
    printf("Elegir operacion\n");
    printf("s para sumar\n");
    printf("r para restar\n");
    printf("m para multiplicar\n");
    printf("d para divir\n");
    fflush(stdin);
    scanf("%c",&op);
    switch(op){
        case 's':{
            resul=sumar(num1, num2);
        break;
        }
        case 'r':{
            resul=resta(num1, num2);
        }
        break;
        case 'm':{
            resul=multi(num1, num2);
        }
        break;
        case 'd':{
            resul=divi(num1,num2);
        }
        break;
        default: printf("Opcion error");
        break;

    }
    printf ("El resultado de la operacin elegida es %d",resul);
    return 0;
    
}

int ingresar_datos(void){
    int aux;
    printf("Ingresar un numero\n");
    scanf("%d",&aux);
    return (aux);
}

int sumar(int num1,int num2){
    int res;
    res= num1+num2;
    return (res);
}

int resta(int num1,int num2){
    int res;
    res=num1-num2;
    return res;
}

int multi(int num1,int num2){
    return(num1*num2);
}

int divi(int num1,int num2){
    while (num2==0);
    {
        printf ("No se puede dividir por cero");
    }
    return(num1/num2);
}