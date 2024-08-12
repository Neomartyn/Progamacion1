#include<stdio.h>

int ingresarCodigoVenta(void);
int ingresarCantidadVenta(void);
float ingresarPrecioVenta(void);
float calcularVenta(int, float);

int main(void){
    int codigo,cantidad,op;
    float precio;

    do
    {   
        printf("Bienvenido al programa de gestion de ventas\n");
        codigo=ingresarCodigoVenta(void);
        cantidad=ingresarCantidadVenta(void);
        precio=ingresarPrecioVenta(void);
    } while ();
    //calculaimprime();

    return 0;    
}

int ingresarCodigoVenta(void){
    int codigo;
    printf("Ingrese codigo de producto");
    scanf("%d",&codigo);
    return(codigo);
}

int ingresarCantidadVenta(void){
int cantidad;
    printf("Ingrese cantidad vendida");
    scanf("%d",&cantidad);
    return(cantidad);
}

float ingresarPrecioVenta(void){
    float precio;
    printf("Ingrese precio de venta");
    scanf("%d",&precio);
    return(precio);
}

float calcularVenta(int cantidad, float precio){
    float venta;
    venta=cantidad*precio;
    return(venta);
}
/*
void calculaImprime(totalVentas,maxCodigo,minCodigo,contadorVentas)
{
    printf("Total de ventas del dia $%.2f\n",totalVentas);
    printf("Codigo del producto con la venta mas alta: %d\n",maxCodigo);
    printf("Codigo del producto con la venta mas baja: %d\n",minCodigo);
    printf("Numero total de ventas ingresadas: %d\n",contadorVentas);
}*/