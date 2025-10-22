#include <stdio.h>

int main() {
    char nombreProducto[50];
    int unidades;
    double precioUnitario, precioTotal;

    printf("Ingrese el nombre del producto: ");
    scanf("%s", nombreProducto);

    printf("Ingrese el precio por unidad: ");
    scanf("%f", &precioUnitario);

    printf("Ingrese el numero de unidades vendidas: ");
    scanf("%d", &unidades);

    precioTotal = precioUnitario * unidades;

    printf("\n--- FACTURA DE VENTA ---\n");
    printf("Producto: %s\n", nombreProducto);
    printf("Unidades vendidas: %d\n", unidades);
    printf("Precio por unidad: %.2f\n", precioUnitario);
    printf("Precio total: %.2f\n", precioTotal);

    return 0;
}

