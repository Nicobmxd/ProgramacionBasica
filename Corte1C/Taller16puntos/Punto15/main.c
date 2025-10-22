#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, esPrimo = 1; 

    printf("Ingrese un n�mero: ");
    scanf("%d", &num);

    if (num <= 1) {
        esPrimo = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                esPrimo = 0;
                break;      
            }
        }
    }

    if (esPrimo == 1)
        printf("%d es un n�mero primo.\n", num);
    else
        printf("%d no es un n�mero primo.\n", num);

    return 0;
}
