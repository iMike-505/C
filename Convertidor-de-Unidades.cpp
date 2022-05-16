// Convertidor de Unidades.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdio.h>
#include<conio.h>

int main()
{
    double metro;
    double yarda;
    double centimetro;
    double pie;
    double milimetro;
    double pulgada;
    int opcion;
    float r;

    do {
        printf("\n\t Conversion de unidades");
        printf("\n1.- Metro");
        printf("\n2.- Centimetro");
        printf("\n3.- Pie");
        printf("\n4.- Yarda");
        printf("\n5.- Milimetro");
        printf("\n6.- Pulgada");
        printf("\n7.- Salir");
        printf("\n Elige una Opcion: ");
        scanf_s("%d", &opcion);

        switch (opcion) {
        case 1:/*metro*/
            printf("\n\n Metro");
            printf("\n Dame tu medida:");
            scanf_s("%f", &r);
            centimetro = r * 100.00;
            printf("\n equivale a  %.4f centimetros", centimetro);
            yarda = r * 1.09;
            printf("\n equivale a %.4f yardas", yarda);
            pie = r * 3.28;
            printf("\n equivalente a %.4f pie", pie);
            milimetro = r * 1000;
            printf("\n equivalente a %.4f milimetros", milimetro);
            pulgada = r * 39.97;
            printf("\n equivalente a %.4f pulgada", pulgada);
            break;
        case 2:/*centimetro*/
            printf("\n\n Centimetro");
            printf("\n Dame tu medida:");
            scanf_s("%f", &r);
            metro = r * 0.01;
            printf("\n equivale a  %.4f metros", metro);
            yarda = r * 0.0109;
            printf("\n equivale a %.4f yardas", yarda);
            pie = r * 0.0328;
            printf("\n equivalente a %.4f pie", pie);
            milimetro = r * 4440;
            printf("\n equivalente a %.4f milimetros", milimetro);
            pulgada = r * 0.3937;
            printf("\n equivalente a %.4f pulgada", pulgada);
            break;
        case 3:/*Pie*/
            printf("\n\n Pie");
            printf("\n Dame tu medida:");
            scanf_s("%f", &r);
            metro = r * 0.3048;
            printf("\n equivale a  %.4f metros", metro);
            yarda = r * 0.9144;
            printf("\n equivale a %.4f yardas", yarda);
            centimetro = r * 30.48;
            printf("\n equivalente a %.4f centimetros", centimetro);
            milimetro = r * 304.8;
            printf("\n equivalente a %.4f milimetro", milimetro);
            pulgada = r * 12;
            printf("\n equivalente a %.4f pulgada", pulgada);
            break;
        case 4:/*Yarda*/
            printf("\n\n Pie");
            printf("\n Dame tu medida:");
            scanf_s("%f", &r);
            metro = r * 0.9144;
            printf("\n equivale a  %.4f metros", metro);
            pie = r * 3;
            printf("\n equivale a %.4f pies", pie);
            centimetro = r * 91.44;
            printf("\n equivalente a %.4f centimetros", centimetro);
            milimetro = r * 914.4;
            printf("\n equivalente a %.4f milimetros", milimetro);
            pulgada = r * 36;
            printf("\n equivalente a %.4f pulgada", pulgada);
            break;
        case 5:/*Milimetro*/
            printf("\n\n Milimetro");
            printf("\n Dame tu medida:");
            scanf_s("%f", &r);
            metro = r * 0.001;
            printf("\n equivale a  %.4f centimetros", metro);
            pie = r * 0.0032;
            printf("\n equivale a %.4f pies", pie);
            centimetro = r * 0.1;
            printf("\n equivalente a %.4f centimetros", centimetro);
            yarda = r * 0.00109;
            printf("\n equivalente a %.4f yardas", yarda);
            pulgada = r * 0.0393;
            printf("\n equivalente a %.4f pulgada ", pulgada);
            break;
        case 6:/*Pulgada*/
            printf("\n\n Pulgada");
            printf("\n Dame tu medida:");
            scanf_s("%f", &r);
            metro = r * 0.0254;
            printf("\n equivale a  %.4f centimetros", metro);
            pie = r * 0.0833;
            printf("\n equivale a %.4f yarda", pie);
            centimetro = r * 2.54;
            printf("\n equivalente a %.4f pie", centimetro);
            yarda = r * 0.0277;
            printf("\n equivalente a %.4f lengua", yarda);
            milimetro = r * 25.4;
            printf("\n equivalente a %.4f pulgada\n", milimetro);
            break;
        }
    } while (opcion != 7);
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

