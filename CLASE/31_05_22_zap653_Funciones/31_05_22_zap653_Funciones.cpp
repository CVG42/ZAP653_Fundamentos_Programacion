// 31_05_22_zap653_Funciones.cpp : Cristina Vera Garcia. zap653
//

#include <iostream>
#include <Windows.h>
#include <string>

//Enum
/*
enum inventario{nada, arma_larga, arma_corta, granada};
enum inv_ammo
{
    ammo_nada, 
    ammo_larga,
    ammo_corta,
    ammo_granada
};

int main()
{
    inventario nohay = nada;
    inventario arma1 = arma_larga;
    inventario arma2 = arma_corta;
    inventario especial = granada;
    inv_ammo balas=ammo_larga;

    bool disparo;
    std::cout << "Quieres disparar? si=1, no=0" << std::endl;
    std::cin >> disparo;
    if (disparo)
    {
        std::cout << "Disparo activado\n";
        if (arma1 == arma_larga && balas == ammo_larga)
        {
            std::cout << "Ejecutaste un disparo\n";
            std::cout << "arma1: " << balas << std::endl;
            std::cout << "Balas: " << balas << std::endl;
        }
        if (arma2 == arma_corta && balas == ammo_corta)
        {
            std::cout << "Ejecutaste con el arma corta\n";
        }
    }

}

*/

//Struct
/*
struct player
{
    std::string nombre;
    int vida, ataque;
    bool escudo;
    std::string skin[5] = {"Normal", "Hallloween", "Epica", "Mexa", "Navidad" };
    std::string inventario;
    std::string armas[5] = { "Cuchillo","Pistola","Rifle","Granada","Bazooka" };
};

void main()
{
    player Cris;
    Cris.nombre = "Vera";
    Cris.vida = 100;
    Cris.ataque = 50;
    Cris.escudo = false;
    Cris.skin[3];
    Cris.inventario = "Nivel 2";
    Cris.armas[3];
}

*/

class nodo
{
public:
    int edad;
    nodo* next;
};

//Funcion para imprimir
void imprimir(nodo* n) 
{
    while (n != NULL)
    {
        std::cout << n->edad << "" << std::endl;
        n = n->next;
    }
}

int main()
{
    nodo* cabeza = NULL;
    nodo* cuello = NULL;
    nodo* torso = NULL;
    nodo* piernas = NULL;
    nodo* pies = NULL;

    cabeza = new nodo();
    cuello = new nodo();
    torso = new nodo();
    piernas = new nodo();
    pies = new nodo();

    cabeza->edad=15;
    cabeza->next = cuello;
    cuello->edad = 10;
    cuello->next = torso;
    torso->edad = 9;
    torso->next = piernas;
    piernas->edad = 50;
    piernas->next = pies;
    pies->edad = 150;
    pies->next = NULL;

    imprimir(cabeza);
}

