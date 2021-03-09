#include <iostream> 
using namespace std;
#include <stdio.h>

int const Arr = 6;
float Array[Arr];


int main() {

	float temp;
	printf("Introduzca los 6 elementos del array: \n");
	for (int i = 0; i < Arr; i++) { // Rellenamos las 10 posiciones del array
		printf("valor %d:", i + 1);
		cin >> Array[i];
	}
	for (int i = 0; i < Arr; i++) {
		for (int j = 0; j < Arr - 1; j++) {
			if (Array[j] < Array[j + 1]) { // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
				temp = Array[j];
				cout << Array[i] << endl;
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
				printf("%s - %s - %s - %s - %s - %s", Array[1], Array[2], Array[3], Array[4], Array[5], Array[6]);
			}
		}
		
	}
	printf("Mostrando array ordenado.....\n");
	for (int i = 0; i < Arr; i++) //Imprime las 10 posiciones
		cout << Array[i] << endl;


	system("PAUSE");
	return 0;
}
