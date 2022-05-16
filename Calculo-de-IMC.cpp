/*
Cálculo de IMC

Programa que calcula el Índice de Masa Corporal (IMC), tras solicitar el peso y altura del usuario. Asimismo ofrece recomendaciones, a partir del resultado obtenido.

IMC = peso / (altura x altura)

Si IMC > 25 “Peso Alto, haga dieta y ejercicio”
Si IMC se encuentra de 22 a 25 “Peso Correcto”
Si IMC < 22 “Peso Bajo, coma más”
*/
#include <stdio.h>

int main()
{
	float peso, altura, IMC;

	printf_s("\nIngrese su peso [Kg]: \t ");
	scanf_s("%f", &peso);
	printf_s("\n\nIngrese su altura [m]: \t");
	scanf_s("%f", &altura);

	IMC = peso / (altura * altura);

		if (IMC > 25) {
			printf_s("\n\nSu IMC es de: %f ", IMC);
			printf_s("\nPeso alto, haga dieta y ejercicio");
			}
		if (IMC < 22) {
			printf_s("\n\nSu IMC es de: %f ", IMC);
			printf_s("\nPeso bajo, coma mas");
			}
		if (IMC >= 22 && IMC <= 25) {
			printf_s("\n\nSu IMC es de: %f ", IMC);
			printf_s("\nPeso correcto");
		}

}

