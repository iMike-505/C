#include <stdio.h>
#include "iostream"

int main() {

	int hor, hor2, hor3;
	float sueldo, pago;
	printf("Ingrese el numero de horas trabajadas esta semana: ");
	scanf_s("%d", &hor);
	printf("Ingrese su sueldo base: ");
	scanf_s("%f", &sueldo);
	if (hor > 40) {
		if (hor > 48) {
			hor3 = hor - 48;
			pago = (40 * sueldo) + (16 * sueldo) + hor3*3*(sueldo);
			printf("El sueldo semanal es %.2f", pago);
		}
		else {
			hor2 = hor - 40;
			pago = (40 * sueldo) + hor2 * 2 * (sueldo);
			printf("El sueldo semanal es %.2f", pago);
		}
	}
	else {
		pago = hor * sueldo;
		printf("El sueldo semanal es %.2f", pago);
	}
}