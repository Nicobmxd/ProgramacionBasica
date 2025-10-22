#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359

int main(int argc, char *argv[]) {
	char repetir = 'S';
	int opcion;
	while (repetir =='S' || repetir == 's') {
		printf("Elija la figura:\n1) Cuadrado\n2) Rectangulo\n3) Triangulo\n4) Circulo\n");
		scanf("%d", & opcion);
		if (opcion == 1) {
			double lado; printf("ingrese lado: ");
			scanf ("%lf", &lado);
			printf( "Area = %.2f\nPerimetro = %.2f\n", lado*lado, 4*lado);
		} else if (opcion == 2) {
			double b, h;
			printf("ingrese base y altura: ");
			scanf("%lf %lf", &b, &h);
			printf("Area = %.2f\nPerimetro = %.2f\n", b*h, 2*(b+h));
		} else if (opcion == 3) {
			double base, altura, a, b, c;
			printf ("Ingrese base y altura: ");
			scanf("%lf %lf", &base, &altura);
			printf("ingrese los 3 lados: ");
			scanf("%lf %lf %lf", &a, &b, &c);
			printf("Area = %.2f\nPerimetro = %.2f\n", (base*altura) / 2.0, a + b + c);
		} else if (opcion == 4) {
			double r;
			printf("Ingrese radio: ");
			scanf ("%lf", &r);
			printf ("Area = %.2f\nPerimetro = %.2f\n", PI*r*r, 2*PI*r);
		} else{
			printf("Opcion invalida.\n");
		}
		printf ("Desea calcular otra figura? (S/N): ");
		scanf(" %c", &repetir);
	}

	return 0;
}
