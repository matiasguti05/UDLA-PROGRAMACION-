#ifndef GUTIERREZ_H
#define MAX_PRODUCTOS 5
struct Producto

{
 char nombre[30];
 float precio;
 int cantidad;
};

void ingresarProductos(struct Producto[], int n);
void mostrarProductos(struct Producto[], int n);
float totalInventario(struct Producto[], int n);

#endif