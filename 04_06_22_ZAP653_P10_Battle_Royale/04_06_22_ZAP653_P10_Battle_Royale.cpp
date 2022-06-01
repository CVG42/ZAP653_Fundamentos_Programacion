// 04_06_22_ZAP653_P10_Battle_Royale.cpp : Cristina Vera Garcia. zap653
//

#include <iostream>
#include <string>
#include <Windows.h>

struct player
    {
        std::string jugador[8];
        int hp, atk, def, armor;       
    };

int main()
{
    srand(time(NULL));
    player n,m[8];

    for (int i = 0; i <= 7; i++)
    {
        std::cout << "Bienvenido, escribe tu nombre jugador #" << i + 1 << ":\n";
        std::getline(std::cin, n.jugador[i]);
        m[i].hp = rand() % 9;
        m[i].atk = rand() % 9;
        m[i].def = rand() % 9;
        m[i].armor = rand() % 9;
    }
    system("pause");
    system("CLS");

    std::cout << "Los jugadores y sus stats son los siguientes: \n\n";

    for (int i = 0; i <= 7; i++)
    {
        std::cout << "- Jugador #" << i + 1 << ": " << n.jugador[i] << "\n";
        std::cout << "  Su HP es: " << m[i].hp << "\n";
        std::cout << "  Su ataque es: " << m[i].atk << "\n";
        std::cout << "  Su defensa es: " << m[i].def << "\n";
        std::cout << "  Su armadura es: " << m[i].armor << "\n";
        std::cout << "\n";
    }
}
