#include <stdio.h>

int main() {
    int year;

    printf("Ingrese un year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("El year %d es bisiesto.\n", year);
    } else {
        printf("El year %d no es bisiesto.\n", year);
    }

    return 0;
}
