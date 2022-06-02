// 26_04_22_ZAP653_P8_Inventario.cpp : Cristina Vera zap653
// En esta practica se va a crear un inventario de juegos de mesa con arrays

#include <iostream>
#include <string>

int main()
{
    std::string nombre[5];
    int year[5];
    std::string autor[5];
    int i, ans;

    std::cout << "Se va a crear una libreria de juegos de mesa";
    do
    {
        for (i = 0; i <= 4; i++)
        {
            std::cout << "Ingresa el titlo del juego de mesa #" << i + 1 << "\n";
            std::cin.ignore();
            std::getline(std::cin, nombre[i]);
            std::cout << "Ingresa el nombre del autor del juego de mesa #" << i + 1 << "\n";
            std::getline(std::cin, autor[i]);
            std::cout << "Ingresa el año de lanzamiento del juego de mesa #" << i + 1 << "\n";
            std::cin >> year[i];
            std::cout << "\n";
        }

        for (i = 0; i <= 4; i++)
        {
            std::cout << "\nEl titlo del juego #" << i + 1 << " es: " << nombre[i];
            std::cout << "\nEl autor del juego #" << i + 1 << " es: " << autor[i];
            std::cout << "\nEl año de lanzamiento del juego #" << i + 1 << " es: " << year[i];
            std::cout << "\n";

        }
        std::cout << "\nPresione 1 si quiere ingresar 5 nuevos juegos: ";
        std::cin >> ans;
        std::cout << "\n";

    } while (ans == 1);
}
