//09_04_22_ZAP653_P6_POKE_BATALLA. CRISTINA VERA GARCIA.
/*
Este programa simula una batalla pokemon. Donde se va a repetir hasta que ganes una batalla con cada pokemon.
Despues que ganes cada batalla, volveras a elegir un pokemon y volver a combatir.
Cuando completas las 4 batallas se te va a preguntar si quieres volver a jugar.
*/

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <random>

using namespace std;

int main()
{
    string op;
    int pokemon, TogHP, TogATK, SqrtHP, SqrtATK, CyndHP, CyndATK, abrATK, abrHP, act, gulpHP, gulpATK, RaiHP, RaiATK, pipHP, pipATK, umbHP, umbATK;
    string intro = "Bienvenido. Estas apunto de tener una pelea Pokemon. \nPara elegir a tu pokemon se necesita ingresar el numero indicado y despues presionar ENTER.";
    string wild, select, rules;
    const string ATKname1[4] = { "Encanto", "Growl","Doble filo", "Beso dulce" };// Togepi
    const string ATKname2[4] = { "Pistola de agua", "Latigo","Giro rapido", "Hidrobomba" };// Squirtle
    const string ATKname3[4] = { "Rueda fuego", "Lanzallamas","Estallido", "Desenrollar" };// Cyndaquil
    const string ATKname4[4] = { "Tormento", "Teletransporte","Ataque psiquico", "Poder oculto" };// Abra

    do
    {
        TogHP = 35, SqrtHP = 44, CyndHP = 39, abrHP = 25;
        gulpHP = 30, pipHP = 30, RaiHP = 30, umbHP = 30;

        for (const auto c : intro)
        {
            cout << c << flush;
            this_thread::sleep_for(chrono::milliseconds(50));
        }
        cout << endl;
        for (const auto c : rules = "Para completar el juego necesitas haber ganado usando a todos los pokemones.\n")
        {
            cout << c << flush;
            this_thread::sleep_for(chrono::milliseconds(50));
        }
        cout << endl;
        do {
            for (const auto c : select = "\nElige a tu pokemon:\n")
            {
                cout << c << flush;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            cout << endl;
            cout << "1. Togepi\n";
            cout << "2. Squirtle\n";
            cout << "3. Cyndaquil\n";
            cout << "4. Abra\n";
            do {
                cin >> pokemon;

                switch (pokemon)
                {
                case 1:
                    cout << "\nJugador 1 ha elegido a Togepi \n";
                    cout << "\nLos stats de Togepi son:\n";
                    cout << "-Tipo: Hada \n-HP: 35 \n-ATK: 20 \n-DEF: 65\n";
                    for (const auto c : wild = "UN GUPLIN SALAVAJE HA APARECIDO!!!\n")
                    {
                        cout << c << flush;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    cout << endl;
                    cout << "\nLos stats de Guplin son: \n";
                    cout << "-Tipo: Veneno \n-HP: 35 \n-ATK: 20 \n-DEF: 65\n";
                    cout << "La batalla va a comenzar en: \n";
                    for (int i = 1; i <= 3; i++)
                    {
                        cout << i << endl;
                        Sleep(1000);
                    }

                    do {
                        cout << "\nElige alguna accion: \n1.Atacar \n2.Defender\n";
                        cin >> act;
                        if (TogHP <= 5) { TogHP = TogHP + 20; cout << "Togepi se cura rapidamente, su HP ahora es: " << TogHP << "\n"; }
                        switch (act)
                        {
                        case 1:
                            srand(time(NULL));
                            cout << "Togepi ha usado " << ATKname1[rand() % 4] << "\n";
                            TogATK = rand() % 20;
                            gulpHP = gulpHP - TogATK;
                            if (TogATK >= 10) { cout << "\nEl ataque de Togepi fue super efectivo!\n"; }
                            cout << "\nTogepi hizo un dmg de: " << TogATK;
                            cout << "\nEl HP de Gulpin ahora es: " << gulpHP;
                            break;

                        case 2:
                            srand(time(NULL));
                            cout << "Togepi ha usado Velo Sagrado para defenderse\n";
                            cout << "Gulpin ha utilizado Bostezo";
                            gulpATK = rand() % 11;
                            TogHP = TogHP - gulpATK;
                            cout << "\nEl HP de Togepi ahora es: " << TogHP;
                            break;
                        }
                    } while (gulpHP > 0);

                    break;

                case 2:
                    cout << "\nJugador 1 ha elegido a Squirtle \n";
                    cout << "\nLos stats de Squirtle son:\n";
                    cout << "-Tipo: Agua \n-HP: 44 \n-ATK: 48 \n-DEF: 65\n";
                    for (const auto c : wild = "UN RAICHU SALAVAJE HA APARECIDO!!!\n")
                    {
                        cout << c << flush;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    cout << "\nLos stats de Raichu son: \n";
                    cout << "-Tipo: Electrico \n-HP: 35 \n-ATK: 20 \n-DEF: 65\n";
                    cout << "La batalla va a comenzar en: \n";
                    for (int i = 1; i <= 3; i++)
                    {
                        cout << i << endl;
                        Sleep(1000);
                    }
                    do {
                        cout << "\nElige alguna accion: \n1.Atacar \n2.Defender\n";
                        cin >> act;
                        if (SqrtHP <= 5) { SqrtHP = SqrtHP + 20; cout << "Squirtle se cura rapidamente, su HP ahora es: " << SqrtHP << "\n"; }
                        switch (act)
                        {
                        case 1:
                            srand(time(NULL));
                            cout << "Squirtle ha usado " << ATKname2[rand() % 4] << "\n";
                            SqrtATK = rand() % 20;
                            RaiHP = RaiHP - SqrtATK;
                            if (SqrtATK >= 10) { cout << "\nEl ataque de Squirtle fue super efectivo!\n"; }
                            cout << "\nSquirtle hizo un dmg de: " << SqrtATK;
                            cout << "\nEl HP de Raichu ahora es: " << RaiHP;
                            break;

                        case 2:
                            srand(time(NULL));
                            cout << "Squirtle ha usado Refugio para defenderse\n";
                            cout << "Raichu ha utilizado Impactrueno";
                            RaiATK = rand() % 11;
                            SqrtHP = SqrtHP - RaiATK;
                            cout << "\nEl HP de Squirtle ahora es: " << SqrtHP;
                            break;
                        }
                    } while (RaiHP > 0);

                    break;

                case 3:
                    cout << "\nJugador 1 ha elegido a Cyndaquil \n";
                    cout << "\nLos stats de Cyndaquil son:\n";
                    cout << "-Tipo: Fuego \n-HP: 39 \n-ATK: 52 \n-DEF: 43\n";
                    for (const auto c : wild = "UN PIPLUP SALAVAJE HA APARECIDO!!!\n")
                    {
                        cout << c << flush;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    cout << endl;

                    cout << "\nLos stats de Piplup son: \n";
                    cout << "-Tipo: Agua \n-HP: 35 \n-ATK: 20 \n-DEF: 65\n";
                    cout << "La batalla va a comenzar en: \n";
                    for (int i = 1; i <= 3; i++)
                    {
                        cout << i << endl;
                        Sleep(1000);
                    }
                    do {
                        cout << "\nElige alguna accion: \n1.Atacar \n2.Defender\n";
                        cin >> act;
                        if (CyndHP <= 5) { CyndHP = CyndHP + 20; cout << "Cyndaquil se cura rapidamente, su HP ahora es: " << CyndHP << "\n"; }
                        switch (act)
                        {
                        case 1:
                            srand(time(NULL));
                            cout << "Cyndaquil ha usado " << ATKname3[rand() % 4] << "\n";
                            CyndATK = rand() % 20;
                            pipHP = pipHP - CyndATK;
                            if (CyndATK >= 10) { cout << "\nEl ataque de Cyndaquil fue super efectivo!\n"; }
                            cout << "\nCyndaquil hizo un dmg de: " << CyndATK;
                            cout << "\nEl HP de Piplup ahora es: " << pipHP;
                            break;

                        case 2:
                            srand(time(NULL));
                            cout << "Cyndaquil ha usado Pantalla de Humo para defenderse\n";
                            cout << "Piplup ha utilizado Hidrochorro";
                            pipATK = rand() % 11;
                            CyndHP = CyndHP - pipATK;
                            cout << "\nEl HP de Cyndaquil ahora es: " << CyndHP;
                            break;
                        }
                    } while (pipHP > 0);

                    break;

                case 4:
                    cout << "\nJugador 1 ha elegido a Abra \n";
                    cout << "\nLos stats de Abra son:\n";
                    cout << "-Tipo: Psychic \n-HP: 25 \n-ATK: 20 \n-DEF: 65\n";
                    for (const auto c : wild = "UN UMBREON SALAVAJE HA APARECIDO!!!\n")
                    {
                        cout << c << flush;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    cout << endl;
                    cout << "\nLos stats de Umbreon son: \n";
                    cout << "-Tipo: Oscuro \n-HP: 35 \n-ATK: 20 \n-DEF: 65\n";
                    cout << "La batalla va a comenzar en: \n";
                    for (int i = 1; i <= 3; i++)
                    {
                        cout << i << endl;
                        Sleep(1000);
                    }
                    do {
                        cout << "\nElige alguna accion: \n1.Atacar \n2.Defender\n";
                        cin >> act;
                        if (abrHP <= 5) { abrHP = abrHP + 20; cout << "Togepi se cura rapidamente, su HP ahora es: " << abrHP << "\n"; }
                        switch (act)
                        {
                        case 1:
                            srand(time(NULL));
                            cout << "Abra ha usado " << ATKname4[rand() % 4] << "\n";
                            abrATK = rand() % 20;
                            umbHP = umbHP - abrATK;
                            if (abrATK >= 10) { cout << "\nEl ataque de Abra fue super efectivo!\n"; }
                            cout << "\nAbra hizo un dmg de: " << abrATK;
                            cout << "\nEl HP de Umbreon ahora es: " << umbHP;
                            break;

                        case 2:
                            srand(time(NULL));
                            cout << "Abra ha usado Aguante para defenderse\n";
                            cout << "Umbreon ha utilizado Luz lunar";
                            umbATK = rand() % 11;
                            abrHP = abrHP - umbATK;
                            cout << "\nEl HP de Abra ahora es: " << abrHP;
                            break;
                        }
                    } while (umbHP > 0);

                    break;
                default: {cout << "Ingresa un numero valido.\n"; }
                }
            } while (pokemon != 1 && pokemon != 2 && pokemon != 3 && pokemon != 4);
        } while (gulpHP + RaiHP + pipHP + umbHP > 0);
        cout << "\n\nFelicidades has ganado!\nQuieres volver a jugar? Escribe Si para jugar nuevamente o No para salir\n";
        cin >> op;

    } while (op == "Si" || op == "si");


    return 0;
}