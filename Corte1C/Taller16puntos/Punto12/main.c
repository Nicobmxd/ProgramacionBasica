#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    printf("Tabla de multiplicar del %d:\n", num);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
