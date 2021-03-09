#include <stdio.h>
#include "iostream"

int main() {


	int selec, trian, radio, diam, lado, a, b, c, d, D, h, n;
	double area=0, peri=0, s, ap;
	printf("¿De que figura desea obtener el area y el perimetro? \n1.-Circulo \n2.-Cuadrado");
	printf("\n3.-Triangulo \n4.-Rectangulo \n5.-Rombo \n6.-Trapecio\n");
	scanf_s("%d", &selec);
	switch (selec) {
	case 1:
		printf("\n(En caso de no tener el valor del radio ponga 0) \nIngrese el radio de la circunferencia: ");
		scanf_s("%d", &radio);
		if (radio != 0) {
			area = 3.1416 * (pow(radio, 2));
			peri = 6.2832 * (radio);
		}
		else {
			printf("Ingrese el diametro de la circunferencia: ");
			scanf_s("%d", &diam);
			area = 3.1416 * (pow(diam, 2)/4);
			peri = 3.1416 * diam;
		}
		printf("\tCirculo: \nArea = %f\t Perimetro = %f ", area, peri);
		break;
	case 2: 
		printf("Ingrese el valor de un lado del cuadrado: ");
		scanf_s("%d", &lado);
		area = pow(lado, 2);
		peri = 4*lado;
		printf("\tCuadrado: \nArea = %.2f\t Perimetro = %.2f ", area, peri);
		break;
	case 3: 
		printf("¿Que tipo de Triangulo? \n1.-Equilatero \n2.-Isosceles \n3.-Escaleno \n4.-Rectangulo\n");
		scanf_s("%d", &trian);
		switch (trian) {
		case 1: 
			printf("Ingrese el valor de un lado del Triangulo: ");
			scanf_s("%d", &lado);
			area = (sqrt(3)/ 2)* lado;
			peri = 3*lado;
			printf("\tTriangulo Equilatero: \nArea = %.2f\t Perimetro = %.2f ", area, peri);
			break; 
		case 2: 
			printf("Ingrese el valor de a y b respectivamente, donde a es uno de los lados iguales y b el otro lado:  ");
			scanf_s("%d", &a);
			scanf_s("%d", &b);
			area = b * (sqrt(pow(a, 2) - (pow(b, 2) / 4)))/2;
			peri = (2 * a) + b;
			printf("\tTriangulo Isosceles: \nArea = %.2f\t Perimetro = %.2f ", area, peri);
			break;
		case 3: 
			printf("Ingrese el valor de a, b y c respectivamente, donde cada uno conforma un lado y s=((a+b+c)/2)\n");
			scanf_s("%d", &a);
			scanf_s("%d", &b);
			scanf_s("%d", &c);
			s = ((a + b + c) / 2);
			area = sqrt(s*(s-a)*(s-b)*(s-c));
			peri = a+b+c;
			printf("\tTriangulo Escaleno: \nArea = %.2f\t Perimetro = %.2f ", area, peri);
			break;
		case 4: 
			printf("Ingrese el valor de a, b y c respectivamente, donde a y b son los catetos y c la hipotenusa\n ");
			scanf_s("%d", &a);
			scanf_s("%d", &b);
			scanf_s("%d", &c);
			area = (b*a)/2;
			peri = a + b + c;
			printf("\tTriangulo Rectangulo: \nArea = %.2f\t Perimetro = %.2f ", area, peri);
			break;
		default: 
			printf("Opcion no valida");
		}
		break;
	case 4: 
		printf("Ingrese el valor de a y b respectivamente, siendo a la altura y b la base:  ");
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		area = a * b;
		peri = 2 * (a + b);
		printf("\tRectangulo: \nArea = %.2f\t Perimetro = %.2f ", area, peri);
		break;
	case 5: 
		printf("Ingrese el valor de D, d y a respectivamente, siendo D la diagonal mayor, d la diagonal menor \n y a el valor de uno de sus lados:  ");
		scanf_s("%d", &D);
		scanf_s("%d", &d);
		scanf_s("%d", &a);
		area = (D * d)/2;
		peri = 4 * a;
		printf("\tRombo: \nArea = %.2f\t Perimetro = %.2f ", area, peri);
		break;
	case 6: 
		printf("Ingrese el valor de a, b, c, d y h respectivamente, siendo a la base mayor, b la base menor, c y d cada uno de los lados sobrantes y h la altura\n");
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		scanf_s("%d", &c);
		scanf_s("%d", &d);
		scanf_s("%d", &h);
		area = h * ((a + b) / 2);
		peri = a+b+c+d;
		printf("\tTrapecio: \nArea = %.2f\t Perimetro = %.2f ", area, peri);
		break;
	default:
		printf("\nOpcion no valida");
	}
}