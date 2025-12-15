#include <stdio.h>
#include "Gutierrez.h"
 
void ingresarProductos(struct Producto producto[], int n){
    for(int i = 0; i < n; i++){
        printf("\nProducto %d\n", i + 1);
 
        printf("Nombre: ");
        scanf("%s", producto[i].nombre);
 
        printf("Precio: ");
        scanf("%f", &producto[i].precio);
 
        printf("Cantidad: ");
        scanf("%d", &producto[i].cantidad);
    }
}
 
 
void mostrarProductos(struct Producto producto[], int n){
    for(int i=0; i<n;i++){
        printf("\nProducto %d", i + 1);
        printf("\nNombre: %s",producto[i].nombre);
        printf("\nPrecio: %.2f",producto[i].precio);
        printf("\nCantidad %d",producto[i].cantidad);
        printf("\nSubrtotal %.2f",producto[i].precio*producto[i].cantidad);    
    }  
}
 
float totalInventario(struct Producto producto[], int n){
    float total=0;
    for(int i=0;i<n;i++){
        total=total+producto[i].precio*producto[i].cantidad;
    }
    return total;
 
}
 
 