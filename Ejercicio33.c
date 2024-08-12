#include<stdio.h>
int a,b,c;
int main(){
    printf("Ingresar 3 numeros enteros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b && a==c ){
        printf("Los numero son iguales");
    }
    else{
        if(a<b && a<c ){
        printf("El numero menor es %d",a);        
        }
        else{
            if(b<a && b<c ){
            printf("El numero menor es %d",b);        
            }
            
            else{
                printf("El numero menor es %d",c);        
                }
            }
    return 0;
    }
}


