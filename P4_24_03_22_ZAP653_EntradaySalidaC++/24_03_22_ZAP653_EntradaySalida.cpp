// 24_03_22_ZAP653_EntradaySalida.cpp : Cristina Vera Garcia
// Esta practica es para mostrar los tipos de entradas y salidas de datos en C++

#include <iostream>
#include <string>

int main()
{
    int n1 = 0;
    double n2 = 0;
    float n3 = 0;
    char i;
    std::string name;
    std::cout << "Ingresa tu nombre: " << std::endl;
    std::getline(std::cin, name);
    std::cout << "Tu nombre es: " << name << std::endl;
    std::cout << "Ingresa un numero" << std::endl;
    std::cin >> n1;
    std::cout << "Usted ha ingresado el numero: " << n1 << std::endl;
    std::cout << "Ingresa un segundo numero con decimales" << std::endl;
    std::cin >> n2;
    std::cout << "Usted ha ingresado el numero: " << n2 << std::endl;
    std::cout << "Ingresa un tercer numero con decimales: " << std::endl;
    std::cin >> n3;
    std::cout << "Usted ha ingresado el numero: " << n3 << std::endl;
    std::cout << "Escribe la inical de tu primer nombre: " << std::endl;
    std::cin >> i;
    std::cout << "Tu inicial es: " << i << std::endl;
}

