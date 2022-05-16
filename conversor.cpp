/*Convertidor entre sistemas.

Programa que permite convertir un valor decimal a binario, octal y hexadecimal.

	El programa solicita el valor a convertir en base 10 y el sistema a convertir.
	Se muestra en pantalla el resultado obtenido
Preguntar al final “¿desea realizar otra operación?”
*/
#pragma warning (disable: 4996)//En caso de compilarlo con Dev-C, quitarlo no es necesario pero para Visual Studio si :)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i = 0;//i actua como contador, bin es el arreglo donde se almacenan los "0"
	int opcion, bin[999];//opcion sirve para indicar el sistema
	int base = 1, suma = 0, res;
	char cadena[63];
	
	while (1) {
		printf_s("Ingrese un valor decimal: ");
		scanf_s("%i", &n);
		printf_s("A que sistema lo quiere convertir?\n\n");
		printf_s("1) B I N A R I O\n\n");
		printf_s("2) O C T A L\n\n");
		printf_s("3) H E X A D E C I M A L\n\n");
		printf_s("4) Salir unu\n\n");
		scanf_s("%i", &opcion);

		switch (opcion) {

		case 1:
			while (n != 0)
			{
				bin[i] = n % 2;
				n = n / 2;
				i++;
			}

			i--;

			printf("Binario: ");

			while (i >= 0)
			{
				printf("%i", bin[i]);
				i--;
			}
			break;

		case 2:
			do
			{
				res = n % 8;
				n = n / 8;
				suma = suma + res * base;
				base = base * 10;

			} while (n > 0);
			printf("El numero octal es:\t%d\n", suma);
			break;

		case 3:
			/*
			ltoa e itoa no regresan nada; modifican directamente a la variable
			El último argumento es la base: 16 en este caso
			*/
			ltoa(n, cadena, 16);
			printf("El numero en hexadecimal es: %s\n", cadena);
			break;
		case 4:
			exit(0);
			break;
		}
		printf_s("\n\nQuiere hacer otra operacion? (presione una tecla uwu)\n\n");
		getchar();
	}
}

