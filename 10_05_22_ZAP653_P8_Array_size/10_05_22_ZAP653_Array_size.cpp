// 10_05_22_ZAP653_Array_size.cpp : Cristina Vera Garcia.
// Práctica de clase #8: Tamaño de Arrays
//

#include <iostream>

int main()
{
	/*
	int edades[3][2] = { {1,2},{9,8},{14,21} };
	int filas = (sizeof(edades) / sizeof(edades[0]));
	std::cout << filas;
	int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
	std::cout << columnas;
	*/
	srand(time(NULL));
	int matriz[3][3];
	int matriz2[3][3] = { {1,1,1},{1,1,1},{1,1,1} };
	//Para matriz donde filas y columnas son previamente definidas
	for (int i = 0; i < (sizeof(matriz2[0]) / sizeof(matriz2[0][0])); i++)
	{
		for (int j = 0; j < (sizeof(matriz2[0]) / sizeof(matriz2[0][0])); j++)
		{

			std::cout << matriz2[i][j] << " ";
		}
		std::cout << "\n";

	}
	std::cout << "\n";
	for (int i = 0; i < (sizeof(matriz2[0]) / sizeof(matriz2[0][0])); i++)
	{
		for (int j = 0; j < (sizeof(matriz2[0]) / sizeof(matriz2[0][0])); j++)
		{
			
			std::cout << "[" <<i<< "]" << "[" << j <<"] = "<<matriz2[i][j]<<"\n";
		}		
	}

	//Para matriz con numeros aleatorios
	std::cout << "\n";
	for (int i = 0; i < (sizeof(matriz[0]) / sizeof(matriz[0][0]));i++)
	{
		for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
		{
			matriz[i][j] = rand() % 9;
			std::cout << matriz[i][j] << " ";
		}
		std::cout << "\n";
		
	}
	std::cout << "\n";
	for (int i = 0; i < (sizeof(matriz[0]) / sizeof(matriz[0][0])); i++)
	{
		for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
		{

			std::cout << "[" << i << "]" << "[" << j << "] = " << matriz[i][j] << "\n";
		}
	}
}

