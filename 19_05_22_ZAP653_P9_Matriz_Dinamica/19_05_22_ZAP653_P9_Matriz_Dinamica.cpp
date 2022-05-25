// 19_05_22_ZAP653_P9_Matriz_Dinamica.cpp : Cristina Vera Garcia
// En esta practica se va a mostrar una matriz 2x3 y una matriz dinamica donde el usuario ingresara las filas y columnas que quiere que la matriz tenga
//

#include <iostream>
#include <Windows.h>

int main()
{
	srand(time(NULL));
	int** matriz;
	int matriz1[2][3],filas, columnas;
	bool ans;

	std::cout << "Ingrese los elementos de la matriz 2x3: \n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "[" << i << "]" << "[" << j << "] = ";
			std::cin >> matriz1[i][j];
		}
	}

	std::cout << "\nLa matriz 2x3 generada es: \n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << matriz1[i][j] << " ";
		}
		std::cout << "\n";
	}

	system("pause");
	system("CLS");

	std::cout << "Matriz dinamica\n";
	std::cout << "\n";

	do {

		std::cout << "Cuantas filas deseas que tenga la matriz?\n";
		std::cin >> filas;
		std::cout << "Cuantas columnas deseas que tenga la matriz?\n";
		std::cin >> columnas;
		
		matriz = new int* [filas];
		//Si la matriz es de igual o mayor dimension a 4x4
		if (filas >= 4 && columnas >= 4)
		{
		for (int i = 0; i < filas; i++)
		{
			matriz[i] = new int[columnas];
		}

		std::cout << "\n" << "Los elementos de la matriz " << filas << "x" << columnas << " son: \n";
		for (int i = 0; i < filas; i++)
		{
			for (int j = 0; j < columnas; j++)
			{
				matriz[i][j] = rand() % 9;
				std::cout << "[" << i << "]" << "[" << j << "] = " << matriz[i][j] << "\n";
			}
		}
		std::cout << "\n";

		std::cout << "\n" << "La matriz generada es: \n";
		for (int i = 0; i < filas; i++)
		{
			for (int j = 0; j < columnas; j++)
			{
				std::cout << matriz[i][j] << " ";
			}
			std::cout << "\n";
		}

		//para cuando la matriz es de dimensiones 3x3 o menor
		}
		else {
			for (int i = 0; i < filas; i++)
			{
				matriz[i] = new int[columnas];
			}

			std::cout << "\n" << "Ingresa los valores de la matriz para cada posicion: \n";
			for (int i = 0; i < filas; i++)
			{
				for (int j = 0; j < columnas; j++)
				{
					std::cout << "[" << i << "]" << "[" << j << "] = ";
					std::cin >> matriz[i][j];
				}
			}
			std::cout << "\n";

			std::cout << "\n" << "La matriz generada es: \n";
			for (int i = 0; i < filas; i++)
			{
				for (int j = 0; j < columnas; j++)
				{
					std::cout << matriz[i][j] << " ";
				}
				std::cout << "\n";

			}

		}
		delete[] matriz;

		std::cout << "\n" << "Para volver a intentarlo escribe 1: " << "\n";
		std::cin >> ans;
		std::cout << "\n";
	} while (ans == TRUE);
}