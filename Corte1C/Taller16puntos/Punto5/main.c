#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	srand(time(NULL));
	
	int apostado;
	int moneda = rand() % 2;
	int ganado, perdido;
	
	printf("Ingresa la cantidad que vas a apostar: ");
		
		scanf("%d", &apostado);
		
		
		ganado = apostado*2;
		perdido = apostado - apostado;
		
		if(moneda == 1){
			
			printf("\nHa salido cara, has ganado: %d\n", ganado);
		}
		    else{
		    	
		    	printf("\nHa salido cruz, has perdido, tu ganancia es: %d\n", perdido);
			}
	return 0;
}
