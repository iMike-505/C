// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include<conio.h>

int main()
{
	int resultado;
	int a;
	int b;
	int opcion;

	do {
		printf("\n  Calculadora  ");
		printf("\n\n1.- Sumar");
		printf("\n2.- Restar");
		printf("\n3.- Multiplicar");
		printf("\n4.- Dividir");
		printf("\n5.- Salir");
		printf("\n Elige una Opcion: ");
		scanf_s("%d", &opcion);

		
		switch (opcion){
		case 1: /*Suma*/
			printf("\n     Dame tu primer numero:");
			scanf_s("%i", &a);
			printf("\n     Introduce el segundo numero:");
			scanf_s("%i", &b);
			resultado = a + b;
			printf("\n      La suma de % i + %i es igual a %i\n",a,b,resultado);
			break;
		case 2: /*Resta*/
			printf("\n     Dame tu primer numero:");
			scanf_s("%i", &a);
			printf("\n     Introduce el segundo numero:");
			scanf_s("%i", &b);
			resultado = a - b;
			printf("\n      La resta de % i - %i es igual a %i\n", a, b, resultado);
			break;
		case 3: /*Multiplicar*/
			printf("\n     Dame tu primer numero:");
			scanf_s("%i", &a);
			printf("\n     Introduce el segundo numero:");
			scanf_s("%i", &b);
			resultado = a * b;
			printf("\n      La multiplicacion de %i * %i es igual a %i\n", a, b, resultado);
			break;
		case 4: /*Division*/
			printf("\n     Dame tu primer numero:");
			scanf_s("%i", &a);
			printf("\n     Introduce el segundo numero:");
			scanf_s("%i", &b);
			resultado = a / b;
			printf("\n      La resta de % i  / %i es igual a %i\n", a, b, resultado);
			break;

		case 5:/*Salir*/
			break;
		}
	
	} while (opcion != 5);
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
