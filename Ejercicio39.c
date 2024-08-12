#include<stdio.h>
int nota;
int main(){
    printf("Ingrese la nota del alumno\n");
    scanf("%d",&nota);
    switch(nota){
        case 10:{   
            printf("Sobresaliente");
            break;}
        case 9:{
            printf("Distinguido");
            break;}
        case 8:{
            printf("Distinguido");
            break;}
        case 7:{
            printf("Bueno");
            break;}    
        case 6:{
            printf("Bueno");
            break;}
        case 5:{
            printf("Aprobado");
            break;}
        case 4:{
            printf("Aprobado");
            break;}
        case 3:{
            printf("Reprobado");
            break;}
        case 2:{
            printf("Reprobado");
            break;}
        case 1:{
            printf("Reprobado");
            break;}
        default:
            printf("La nota es incorrecta");
           

    }
return 0;
}