#include<stdio.h>
int ingresarCodigoVenta(void); 
int ingresarCantidadVenta(void);
float ingresarPrecioVenta(void);
float calcularVenta(int, float);
//void calculaImprime(float totalVentas, int maxCodigo, int minCodigo, int contadorVentas)

int main(){
    int Cod_producto, Cant_vendida;
    float Precio_Unidad, venta_total;
    printf("Bienvenido al programa de gestion de ventas\n");
    printf("Ingrese codigo de producto o cero para salir: ");
    Cod_producto=ingresarCodigoVenta();
    //printf("control %d\n",Cod_producto);
    Cant_vendida=ingresarCantidadVenta();
    //printf("control %d\n",Cant_vendida);
    Precio_Unidad=ingresarPrecioVenta();
    //printf("control %f\n",Precio_Unidad);
    venta_total=calcularVenta(Cant_vendida,Precio_Unidad);
    printf("control %0.2f\n",venta_total);

  
    printf("Gracias");
    return 0;
    }

int ingresarCodigoVenta(void){
    int Cod_producto;
    scanf("%d",&Cod_producto);
    return(Cod_producto);
}
int ingresarCantidadVenta(void){
int Cant_vendida;
    printf("Ingrese cantidad vendida: ");
    scanf("%d",&Cant_vendida);
    return(Cant_vendida);
}
float ingresarPrecioVenta(void){
    float Precio_Unidad;
    printf("Ingrese precio unitario del producto: ");
    scanf("%f",&Precio_Unidad);
    return(Precio_Unidad);
}
float calcularVenta(int Cant_vendida, float Precio_Unidad){
    float venta_total;
    venta_total = Cant_vendida * Precio_Unidad;
    return(venta_total);
}
/*void calculaImprime(totalVentas,maxCodigo,minCodigo,contadorVentas)
{
    printf("Total de ventas del dia $%.2f\n",totalVentas);
    printf("Codigo del producto con la venta mas alta: %d\n",maxCodigo);
    printf("Codigo del producto con la venta mas baja: %d\n",minCodigo);
    printf("Numero total de ventas ingresadas: %d\n",contadorVentas);
}
*/