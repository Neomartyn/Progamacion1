#include<stdio.h>
int x=2, y=6, z=9, r=100, s=10, a=15, b=3;

int main(){
    x+=10;
    s*=b;
    //r/=0; No se puede dividir por cero
    y+=x+10;
    z-=a+b;
    printf ("resultado %d\n",x);
    printf ("resultado %d\n",s);
    printf ("resultado %d\n",r);
    printf ("resultado %d\n",y);
    printf ("resultado %d\n",z);
    return(0);

}