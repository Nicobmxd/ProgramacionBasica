#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);

    max = a;
    min = a;

    if (b > max) max = b;
    if (c > max) max = c;

    if (b < min) min = b;
    if (c < min) min = c;

    printf("\nEl numero mayor es: %d\n", max);
    printf("El numero menor es: %d\n", min);

    return 0;
}

