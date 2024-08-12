#include<stdio.h>
int numero,control=0,promedio=0;
int main(){
    while(control<10)
    {
        printf("%d - Ingresar un numero\n",control);
        scanf("%d",&numero);
        if(numero>0){
            printf("%d es positivo\n",numero);
            promedio=(promedio+numero)/10;
            }
    control=control+1; 
    }
printf("Se ingresaron 10 valores su promedio es %d",promedio);

return 0;
}