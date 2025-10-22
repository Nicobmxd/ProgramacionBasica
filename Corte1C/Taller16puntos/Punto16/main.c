#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    printf("Ingrese un numero N: ");
    scanf("%d", &n);

    printf("Numeros pares entre 1 y %d:\n", n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
