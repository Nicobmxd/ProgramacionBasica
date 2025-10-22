#include <stdio.h>

int main() {
    char nombre[50];
    float horasTrabajadas, precioHora;
    float sueldoBruto, retencion, sueldoNeto;

    printf("Ingrese el nombre del trabajador: ");
    scanf("%s", nombre);

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horasTrabajadas);

    printf("Ingrese el precio por hora: ");
    scanf("%f", &precioHora);

    sueldoBruto = horasTrabajadas * precioHora;
    retencion = sueldoBruto * 0.05; 
    sueldoNeto = sueldoBruto - retencion;

    printf("\n--- NOMINA DEL TRABAJADOR ---\n");
    printf("Nombre: %s\n", nombre);
    printf("Horas trabajadas: %.2f\n", horasTrabajadas);
    printf("Precio por hora: %.2f\n", precioHora);
    printf("Sueldo bruto: %.2f\n", sueldoBruto);
    printf("Retencion (5%%): %.2f\n", retencion);
    printf("Sueldo neto: %.2f\n", sueldoNeto);

    return 0;
}

