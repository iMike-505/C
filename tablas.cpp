// tablas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include<conio.h>

int main()
{
    int factor1, factor2, producto;
    int tabla1, tabla2;

    printf("Tablas de multiplicar");
    printf("\n Primera Tabla");
    scanf_s("%i",&tabla1);
    printf("\n Ultima Tabla");
    scanf_s("%i",&tabla2);

    for (factor1=tabla1;factor1<=tabla2;factor1++)
    {
        printf("\n\t\t Tabla del %i",factor1);
        for (factor2=1;factor2<=10;factor2++)
        {
            producto = factor1 * factor2;
            printf("\n %i + %i = %i", factor1, factor2, producto);
        }
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
