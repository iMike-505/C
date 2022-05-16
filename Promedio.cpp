// Promedio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;;
    int h;
    int i;
    int suma;
     
       
    printf("Calculo de promedio");
    printf("Digite sus nueve calificaciones\n");
    printf("Primera calificacion:  \n");
    scanf_s("%i", &a);
    printf("Segunda calificacion:  \n");
    scanf_s("%i", &b);
    printf("Tercera calidicacion:  \n");
    scanf_s("%i", &c);
    printf("Cuarta calificacion:  \n");
    scanf_s("%i", &d);
    printf("Quinta calificaion:  \n");
    scanf_s("%i", &e);
    printf("Sexta calificaion: \n");
    scanf_s("%i", &f);
    printf("Septima calificacion:  \n");
    scanf_s("%i", &g);
    printf("Octava calificaion:  \n");
    scanf_s("%i", &h);
    printf("Novena calidicacion:  \n");
    scanf_s("%i", &i);

    suma = (a + b + c + d + e + f + g + h + i) / 9;

    printf("tu calificaion es %i\n",suma);

    if (suma > 5) {
        printf("Aprobado\n");
    }
    else if (suma < 5) {
        printf("Reprobado\n");
    }
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
