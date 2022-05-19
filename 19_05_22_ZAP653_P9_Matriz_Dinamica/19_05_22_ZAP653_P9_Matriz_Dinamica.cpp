// 19_05_22_ZAP653_P9_Matriz_Dinamica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>

int main()
{
	int** matriz;
	int filas, columnas;
	bool ans;

	do {

		std::cout << "Cuantas filas quieres?\n";
		std::cin >> filas;
		std::cout << "Cuantas columnas quieres?\n";
		std::cin >> columnas;
		matriz = new int* [filas];
		if (filas >= 4 && columnas >= 4)
		{
		for (int i = 0; i < filas; i++)
		{
			matriz[i] = new int[columnas];
		}

		std::cout << "\n" << "Los elementos de su matriz son: \n";
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

		}
		else {
			for (int i = 0; i < filas; i++)
			{
				matriz[i] = new int[columnas];
			}

			std::cout << "\n" << "Ingresa los valores de la matriz en cada una de sus posiciones: \n";
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

		std::cout << "\n" << "Escribe 1 si quieres volver a intentarlo" << "\n";
		std::cin >> ans;
		std::cout << "\n";
	} while (ans == TRUE);
}