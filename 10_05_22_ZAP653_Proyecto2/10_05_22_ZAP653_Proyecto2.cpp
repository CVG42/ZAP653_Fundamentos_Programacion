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
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        cout << type[i];
    }
}

int main()
{
    setlocale(LC_ALL, "spanish");

    int ans=0;

    do 
    {
        PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
        type("Este es un proyecto hecho por Cristina Vera.\nEs una aventura de text donde tus decisiones van a cambiar el rumbo de la historia.\nPresiona 1 para continuar: \n");
        PlaySound(NULL, NULL, 0);
        verify(ans);     
    } while (verify(ans) != 1);

    PlaySound(TEXT("music1.wav"), NULL, SND_ASYNC);
    for (const auto c : "Test de musica\n")
    {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(200));
    }
    cout << endl;
}


