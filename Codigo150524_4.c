#include <stdio.h>

#define SEGUNDOS_EN_UNA_HORA 3600

#define MINUTOS_EN_UNA_HORA 60

#define MAXIMO 86400


int main (){

    

    int Segundos_Totales, Hora, Min, Seg_Restantes, Aux,Control;

    

    printf("Bienvenido al programa\n");

    do {

        printf("Ingrese los segundos que quiera pasar a horas\n");

        scanf("%d", &Segundos_Totales);

        

        while (Segundos_Totales <=0 || Segundos_Totales > MAXIMO) {

            printf("No es un valor valido, por favor ingreselo nuevamente\n");

            scanf("%d", &Segundos_Totales);

        }

       

        Hora= (Segundos_Totales/SEGUNDOS_EN_UNA_HORA);

        Aux=(Segundos_Totales % SEGUNDOS_EN_UNA_HORA);

        Min=(Aux / MINUTOS_EN_UNA_HORA);

        Seg_Restantes= (Aux % MINUTOS_EN_UNA_HORA);

        printf("La cantidad de horas es: %d\n", Hora);

        printf("La cantidad de minutos  es: %d\n", Min);

        printf("La cantidad de segundos es: %d\n", Seg_Restantes);

        printf("Ingrese 0 para salir 1 para continuar\n");

        scanf("%d",&Control);

    } while (Control !=0);

    

    return 0;

}


