#include <stdio.h>
#include <stdlib.h>

int main() {
    float num, suma = 0;
    int contador = 0;

    printf("Ingrese numeros positivos (termine con un numero negativo):\n");

    while (1) { 
        scanf("%f", &num);

        if (num < 0)
            break; 

        suma += num;
        contador++;
    }

    if (contador > 0) {
        printf("El promedio es: %.2f\n", suma / contador);
    } else {
        printf("No ingreso ningun numero positivo.\n");
    }

    return 0;
}
