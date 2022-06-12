// 26_04_22_ZAP653_Arreglos.cpp : Cristina Vera Garcia zap653
// Ejemplo y sintaxys de los arreglos. Inventario de libros
//

#include <iostream>
#include <string>

int main()
{
    std::string titulo[5];
    int year[5];
    std::string autor[5];
    int i;

    for (i = 0; i <= 4; i++)
    {
    std::cout << "Ingresa el titlo del libro "<< i<<"\n";
    std::cin.ignore();
    std::getline(std::cin, titulo[i]);
    std::cout << "Ingresa el nombre del autor del libro " << i << "\n";
    std::getline(std::cin, autor[i]);
    std::cout << "Ingresa el año de publicacion del libro " << i << "\n";
    std::cin >> year[i];
    }

    for (i = 0; i <= 4; i++)
    {
        std::cout << "\nEl titlo del libro " << i << " es: "<<titulo[i];
        std::cout << "\nEl autor del libro " << i << " es: " << autor[i];
        std::cout << "\nEl año del libro " << i << " es: " << year[i];

    }

}

