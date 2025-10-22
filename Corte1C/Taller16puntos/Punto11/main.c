#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char contrasenaCorrecta[20] = "secreto";  
    char contrasenaIngresada[20];
    int intentos = 0;

    while (intentos < 3) {
        printf("Ingrese la contrasena: ");
        scanf("%s", contrasenaIngresada);

        if (strcmp(contrasenaIngresada, contrasenaCorrecta) == 0) {
            printf("Contrasena correcta. Acceso permitido.\n");
            return 0;  
        } else {
            intentos++;
            printf("Contrasena incorrecta. Intento %d de 3.\n", intentos);
        }
    }

    printf("Demasiados intentos. Acceso denegado.\n");

    return 0;
}

