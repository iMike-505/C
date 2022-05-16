#include <stdio.h>
#include "iostream"

int main() {

	int Num=0, val, suel, ven=0;
	printf("Ingrese el numero de ventas: ");
	scanf_s("%i", &Num);
	printf("Ingrese el valor de cada venta: ");
	for (int i = 1; i <= Num; i++) {
		printf("Valor de la venta %i: ", i);
		scanf_s("%i", &val);
		ven = ven + val;
	}
	printf("\nIngrese su sueldo base: ");
	scanf_s("%i", &suel);
	if (ven >= 2000) {
		suel = suel + (suel * 0.20);
	}
	else {
		suel = suel + (suel * 0.10);
	}
	printf("El numero de ventas fue: %i\nLogrando una venta de: %i\ny obteniendo una gananc%ca de: %i", Num, ven, 161, suel);

}