#include <stdio.h>
#include <stdlib.h>
#include <time.h>   

int main() {
    int numeroSecreto, intento, contador = 0;

    srand(time(NULL));
    numeroSecreto = rand() % 10 + 1; 

    printf("Adivine el numero entre 1 y 10\n");

    do {
        printf("Ingrese su intento: ");
        scanf("%d", &intento);
        contador++;

        if (intento < numeroSecreto)
            printf("Demasiado bajo. Intente otra vez.\n");
        else if (intento > numeroSecreto)
            printf("Demasiado alto. Intente otra vez.\n");
        else
            printf("Correcto. Adivino el numero en %d intentos.\n", contador);

    } while (intento != numeroSecreto);

    return 0;
}
