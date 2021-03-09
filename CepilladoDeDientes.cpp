#include <stdio.h>
#include "iostream"

using namespace std;

int main() {


	char res = 'n', res1 = 's';
	printf("%cTiene los Dientes sucios? \ns/n: ", 168);
	cin >> res;
	if (res == 's') {
		printf("Verifique que tiene lo necesario para capillarse los dientes \n1.- Cepillo de Dientes \n2.- Pasta de Dientes");
		printf("\n3.- Enjuague Bucal (opcional) \n4.- Hilo De Dientes (opcional)");
		printf("\n¿Tiene al menos las 2 primeras herramientas para cepillarse los dientes? \ns/n: ");
		cin >> res1;
		if (res1 == 's') {

			printf("Proceda a vertir pasta en el cepillo\nCepille sus Dientes\n");
			printf("Abra el grifo del agua\nEnjuague su boca\nCierre el grifo del agua\n");
			printf("Limpie sus dientes con hilo dental (opcional)\nenjuague con enjuague bucal (opcional)\n\n");
			printf("Sus Dientes estan limpios!!\n\n");
		}else {
			printf("Consiga el Cepillo de Dientes o la Pasta dependiendo de cual le haga falta\n\n");
		}
	}
	else {
		printf("Entonces no hay necesidad de cepillarlos");
	}
	
}