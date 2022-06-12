// Entra// 24_03_22_ZAP653_EntradaySalidaC.cpp : Cristina Vera Garcia.
// Esta practica es para mostrar los tipos de entradas y salidas de datos utilizando C.

#include <iostream>
#include <string>
#include <stdio.h>
int main()
{
    int n;
    float n1;
    char i;
    double n2;
    char name[50];

    printf("Escribe tu nombre completo: \n");
    fgets(name, sizeof(name), stdin);
    printf("Tu nombre es: %s \n", name);
    printf("Escribe la inicial de tu primer nombre: \n");
    scanf("%c", &i);
    printf("Tu inicial es: %c \n", i);
    printf("Escribe un numero entero: \n");
    scanf("%d", &n);
    printf("Tu numero es: %d \n", n);
    printf("Escribe un numero con decimales: \n");
    scanf("%f", &n1);
    printf("Tu numero es: %f \n", n1);
    printf("Escribe un numero con decimales: \n");
    scanf("%lf", &n2);
    printf("Tu numero es: %lf \n", n2);

}
