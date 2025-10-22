#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int positivos = 0, negativos = 0;

    printf("Ingrese numeros (termine con 0):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0)
            break;

        if (num > 0)
            positivos++;
        else
            negativos++;
    }

    printf("Cantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);

    return 0;
}
