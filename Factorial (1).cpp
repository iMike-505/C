#include <stdio.h>
#include "iostream"

int main () {

	int valor, factorial=1;
	printf("Ingrese un valor limite: ");
	scanf_s("%d", &valor);
	for (int i = 1; i <= valor; i++) {
		factorial = factorial * i;
		printf("%d! = %d\n", i, factorial);
	}
	
}