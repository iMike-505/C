#include <stdio.h>

void main (void)
{
	float x[20], y[20];
	float A,h;
	int a;
	a  = 0;
	A = h = 0;
	printf("¿Cuantas x tiene la tabla?"); scanf("%d", &a);
	printf("¿De cuánto es el paso?"); scanf("%f", &h);
	for (int i = 0; i < a; i++)
	{
		x[i] = y[i] = 0;
	}
	for (int i = 0; i < a; i++)
	{
		printf("X%d:", i); scanf("%f", &x[i]);
		printf("y%d:", i); scanf("%f", &y[i]);
	}
	for (int i = 1; i < a-1; i++)
	{
		A = A + y[i];
	}

	A = ((2 * A) + y[0] + y[a-1]);
	A = A * (h / 2);
	printf("El area es:%f", A);
}
