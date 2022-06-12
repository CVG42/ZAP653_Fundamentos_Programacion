// zap653_CristinaVeraGarcia_Examen3.cpp : Cristina Vera Garcia zap653. Parte Practica del Examen Parcial 3 Fundamentos de programacion
//

#include <iostream>
#include <Windows.h>
#include <String>

int main()
{
    int matriz[3][3], filas, columnas,size,ans;
    int** matrix;
    std::string* series = NULL;
   

    std::cout << "PRACTICA #1\n";
    std::cout << "\nMatriz estatica 3x3. Se va a mostrar primero los datos que seran utilizados para formar la matriz, en este caso van a ser aleatorios.\n";
    std::cout << "\nLos datos de la matriz son: \n";
    //Metodo para llenar
    for (int i = 0; i < (sizeof(matriz[0]) / sizeof(matriz[0][0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            matriz[i][j] = rand() % 9;
            std::cout << "[" << i << "]" << "[" << j << "] = " << matriz[i][j];
            std::cout << "\n";
        }

    }
    std::cout << "\nLa matriz es: \n";
    //Metodo para mostrar la info
    for (int i = 0; i < (sizeof(matriz[0]) / sizeof(matriz[0][0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            std::cout << matriz[i][j] <<" ";
        }
        std::cout << "\n";
    }
    std::cout << "\n---------------------------------\n";
    
    system("pause");
    system("CLS");

    std::cout << "PRACTICA #2\n";
    std::cout << "\nEl usuario puede determinar la cantidad de series de TV que quiere guardar, despues procedera a escribirlas y al final se imprime todas las series almacenadas.\n";
    std::cout << "\nCuantas series quieres guardar?\n";
    std::cin >> size;
    series = new std::string[size];
    //Metodo para llenar
    for (int i = 0; i < size; i++)
    {
        std::cout << "\nTitulo de la serie #" << i + 1 << ": \n";
        if (i == 0)
        {
            std::cin.ignore();
        }
        getline(std::cin, series[i]);
    }
    std::cout << "\nTus series son: " << "\n";
    //Metodo para mostrar la info
    for (int i = 0; i < size; i++)
    {
        std::cout << "Serie #" << i + 1 << ": " << series[i] << "\n";
    }

    delete[] series;
    series = NULL;
    std::cout << "\n---------------------------------\n";

    system("pause");
    system("CLS");

    std::cout << "PRACTICA #3\n";
    std::cout << "\nMatriz Dinamica. Si las dimensiones de la matriz son iguales o superiores a 4, ya sea en columnas o filas, la matriz se va rellenar de manera aleatoria\n";
    do
    {

    std::cout << "\nIngrese el numero de filas: \n";
    std::cin >> filas;
    std::cout << "\nIngrese el numero de columnas: \n";
    std::cin >> columnas;
    if (filas >= 4 || columnas >= 4)
    {
        matrix = new int* [filas];
        for (int i = 0; i < filas; i++)
        {
            matrix[i] = new int[columnas];
        }
        
        std::cout << "\nLos datos de la matriz son: \n";
        //Metodo para llenar
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                matrix[i][j] = rand() % 9;
                std::cout << "[" << i << "]" << "[" << j << "] = " << matrix[i][j];
                std::cout << "\n";
            }

        }
        //Metodo para mostrar info
        std::cout << "\nLa matriz es: \n";
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {

                std::cout << matrix[i][j] << " ";
            }
            std::cout << "\n";
        }
        delete[] matrix;
    }
    else {
        std::cout << "\nIngresa los datos de la matriz para cada posicion: \n\n";
        matrix = new int* [filas];
        for (int i = 0; i < filas; i++)
        {
            matrix[i] = new int[columnas];
        }
        //Metodo para llenar
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                std::cout << "[" << i << "]" << "[" << j << "] = ";
                std::cin >> matrix[i][j];
                std::cout << "\n";
            }

        }
        //Metodo para mostrar info
        std::cout << "\nLa matriz es: \n\n";
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {

                std::cout << matrix[i][j] << " ";
            }
            std::cout << "\n";
        }
        delete[] matrix;
    }
    std::cout << "\nPresiona 1 si quieres volver a intentarlo: \n";
    std::cin >> ans;
    } while (ans == 1);
}