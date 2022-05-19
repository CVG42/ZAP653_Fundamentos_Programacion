// 12_05_22_ZAP653_Punteros.cpp : Cristina Vera Garcia
//

#include <iostream>
#include <Windows.h>
#include <locale>
#include <string>


int main()
{
    /*
    //Funciones de control
    system("pause"); //Pausa el sistema hasta que se presione una tecla
    system("CLS"); //limpia consola en impresion
    Sleep(100); //Detiene la ejecucion por un tiempo

    //Puntero
    int Variable = 0; //Variable entera normal
    int* apuntador = &Variable; //Puntero

    std::cout << Variable << std::endl;
    *apuntador = 20;
    std::cout << Variable << std::endl; //valor cambiado de la variable
    std::cout << apuntador << std::endl; //imprime la direccion
    std::cout << *apuntador << std::endl;
    std::cout << &Variable << std::endl;

    //Borrar o liberar la memoria
    apuntador = NULL;
    
    */
 
    std::string* titulos = NULL;
    int size;
    std::cout << "Cuantos libros quieres almacenar?";
    std::cin >> size;
    titulos = new std::string[size];
    //Rellenar
    for (int i = 0; i < size; i++)
    {
        std::cout << "Ingresa el titulo del libro #" << i + 1 << ": \n";
        if (i == 0)
        {
            std::cin.ignore();
        }
        getline(std::cin, titulos[i]);
        system("CLS");
    }
    std::cout << "Tus libros son: " << "\n";
    //Mostrar
    for (int i = 0; i < size; i++)
    {
        std::cout << "Libro #" << i+1 << ": " << titulos[i] << "\n";
    }
    
    delete[] titulos;
    titulos = NULL;
    
    
}


