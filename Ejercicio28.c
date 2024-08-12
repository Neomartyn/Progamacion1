#include<stdio.h>
#include<math.h>
float a,b,c,x1,x2;
int main(){
    printf("ingrese el valor de los 3 coficientes a, b y c\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    x1=((-b+(sqrt((b*b)-4*a*c)))/2*a);
    x2=((-b-(sqrt((b*b)-4*a*c)))/2*a);
    printf("El valor de x1 es %.4f y el valor de x2 es %.4f",x1,x2);
    return 0;
}