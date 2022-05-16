#include <stdio.h>

void main() {

	int intentos = 0;

	printf("\t\t\tIntentos\n\n");
	
	int numero = 1;
		while (numero != 0) {
			printf("Presiona el 0 para terminar ");
			scanf_s("%i", &numero);
		    intentos = intentos + 1;
		}
		printf("\nFin de ciclo, presionaste el cero en el intento: %i", intentos);
}