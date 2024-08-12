#include<stdio.h>
#define Tamanio 10
void CargarVector(int[]);
void SumarVector(int[]);
void PromedioVector(int[]);

int main(){
int vector[Tamanio];
CargarVector(vector);
SumarVector(vector);
PromedioVector(vector);
return 0;
}

void CargarVector(int a[]){
    int i;
    for(i=0;i<Tamanio;i++){
        a[i]=rand()%(20-10+1)+20;
        
    }
}

void SumarVector(int b[]){
    int i, Suma=0;
    for(i=0;i<Tamanio;i++){
        Suma=b[i]+Suma;
        }
    printf("El acumulado es %d \n",Suma);         
}

void PromedioVector(int c[]){
    int i, promedio=0;
    for(i=0;i<Tamanio;i++){
        promedio=c[i]+promedio;
        }
        promedio=promedio/i;
    printf("El promedio es %d \n",promedio);
}