// 10_05_22_ZAP653_Proyecto2.cpp : Cristina Vera Garcia.
//

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include<MMSystem.h>
#include <locale>
#include <chrono>
#include <time.h>
#include <thread>
#include <random>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iomanip> 

using namespace std;

int verify(int ans)
{
    while (true)
    {
        cin >> ans;
        if (!cin.good())
        {
            cout << "Ingresa un valor válido\n";
            cin.clear();
            cin.ignore((numeric_limits<int>::max)(), '\n');
        }
        else
        {
            break;
        }
    }
    return TRUE;
}

void type(string type)
{
    for (int i = 0; i < type.size(); i++)
    {
        for (const auto c : "") 
        {
            std::cout << c << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
        cout << type[i];
    }
}

int main()
{
    setlocale(LC_ALL, "spanish");

    int ans=0;
    string intro; string ln;
    ifstream file("intro.txt");

    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("Este es un proyecto hecho por Cristina Vera.\nEs una aventura de texto donde tus decisiones van a cambiar el rumbo de la historia.\n");
    PlaySound(NULL, NULL, 0);
    system("pause");
    system("CLS");
    
    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("El fantasma de la realidad, para muchos, es el más aterrador. Este te atrapa en ilusiones y cuando menos lo esperas llega y te da el beso que te manda al infierno.\n");
    type("Los que se han topado con él han tratado de escapar, pueden pasar horas, días e incluso años, pero al final de cuentas, estaban en jaque desde el comienzo.\n");
    cout << "\n";
    type("Para otros, este fantasma es inofensivo, lo aceptan como parte de su vida y dejan que les haga compañía, en sus momentos más difíciles lo abrazan\n");
    type("e incluso dejan que los bese en la mejilla y le dan las gracias con una sonrisa cálida y sincera en su rostro.\n");
    cout << "\n";
    type("Cobardía y valentía, esa podría ser la manera en la que se les pueda clasificar a esas dos percepciones del fantasma,\n");
    type("pero al final todo es subjetivo, y si me preguntan, en qué bando estoy yo, simplemente es que no me catalogo en alguno,\n");
    type("puede que en realidad no sea cobardía ni valentía, y que sólo sea fortuna, porque les diré que el fantasma no es misericordioso ni piadoso,\n");
    type("tampoco es bondadoso, pero no posee maldad. Sólo les puedo asegurar que el fantasma siempre gana, al fin y al cabo, yo sólo soy capaz de observar.\n");
    cout << "\n";
    cout << setw(165) << right << "-Them\n";
    PlaySound(NULL, NULL, 0);
  
}


