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

bool ReadInt(int& valor)
{
    bool ok = cin.good();
    if (!ok)
    {
        cin.clear();
        cin.ignore((numeric_limits<streamsize>::max)(), '\n');
    }
    return ok;
}

void verify(int ans)
{
    while (true)
    {
        if (!ReadInt(ans))
        {
            cout << "Ingrese un valor v�lido (Entero).\n";
            cin >> ans;
        }
        else break;
    }
}

void type(string type)
{
    for (int i = 0; i < type.size(); i++)
    {
        for (const auto c : "") 
        {
            std::cout << c << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(0));
        }
        cout << type[i];
    }
}

int main()
{
    setlocale(LC_ALL, "spanish");

    int ans=0;
    string intro; string ln; string name;
    ifstream file("intro.txt");

    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("Este es un proyecto hecho por Cristina Vera.\nEs una aventura de texto donde tus decisiones van a cambiar el rumbo de la historia.\n");
    PlaySound(NULL, NULL, 0);
    
    system("pause");
    system("CLS");
    
    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("Escribe el nombre de tu personaje: ");
    PlaySound(NULL, NULL, 0);
    getline(cin, name); cout << "\n";
    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("Bienvenid@ "); type(name); type(".\n");
    PlaySound(NULL, NULL, 0);

    system("pause");
    system("CLS");

    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("El fantasma de la realidad, para muchos, es el m�s aterrador. Este te atrapa en ilusiones y cuando menos lo esperas llega y te da el beso que te manda al infierno.\n");
    type("Los que se han topado con �l han tratado de escapar, pueden pasar horas, d�as e incluso a�os, pero al final de cuentas, estaban en jaque desde el comienzo.\n");
    cout << "\n";
    type("Para otros, este fantasma es inofensivo, lo aceptan como parte de su vida y dejan que les haga compa��a, en sus momentos m�s dif�ciles lo abrazan\n");
    type("e incluso dejan que los bese en la mejilla y le dan las gracias con una sonrisa c�lida y sincera en su rostro.\n");
    cout << "\n";
    type("Cobard�a y valent�a, esa podr�a ser la manera en la que se les pueda clasificar a esas dos percepciones del fantasma,\n");
    type("pero al final todo es subjetivo, y si me preguntan, en qu� bando estoy yo, simplemente es que no me catalogo en alguno,\n");
    type("puede que en realidad no sea cobard�a ni valent�a, y que s�lo sea fortuna, porque les dir� que el fantasma no es misericordioso ni piadoso,\n");
    type("tampoco es bondadoso, pero no posee maldad. S�lo les puedo asegurar que el fantasma siempre gana, al fin y al cabo, yo s�lo soy capaz de observar.\n");
    cout << "\n";
    cout << setw(165) << right << "-????\n";
    PlaySound(NULL, NULL, 0);

    system("pause");
    system("CLS");

    type(name); type(" sosten�a el libro que conten�a aquellas palabras. Lo ha le�do una y otra vez, pero a�n as�, nunca lo ha terminado, siempre llegaba a la misma parte y no pasaba de ah�.\n");
    type("Estaba sentado al borde de un r�o esperando a que algo mordiera el anzuelo de la ca�a de pescar que �l mismo hizo ya a�os atr�s.\n");
    type("Cu�nto tiempo hab�a pasado desde que lleg�, �una hora, dos?, �acaso habr�n sido s�lo treinta minutos? No lo sabe.\n");
    type("S�lo ha estado leyendo aquel libro viejo sin autor que encontr� un d�a, tampoco sabe en d�nde o por qu� lleg� a sus manos.\n");
    cout << "\n";

    type("�Era ignorancia por parte de "); type(name);  type("? Definitivamente no, �ser�a falta de atenci�n al tiempo y detalles?\n");
    type("Podr�a sonar a que ese era el caso, pero puede ser falta de atenci�n si se desconoce a qu� se le deba prestar atenci�n y a qu� no,\n");
    type("de aqu� volvemos a la ignorancia, pero tampoco podemos llamar a alguien ignorante s�lo por no saber, no puede ser ignorancia si aquello que no se sabe no existe.\n");
    type("La gente le dice ignorancia para referirse a los hechos y conocimientos que otros no tiene, pero ellos s�, y esta trae bastantes defectos.\n");
    cout << "\n";

    type("El s�lo era alguien que quer�a pescar algo rico para disfrutarlo en su cena, entonces, fue cuando por fin algo tir� de la ca�a con mucha fuerza.\n");
    type("�Qu� deseas hacer?\n\n"); cout << "1. Tirar de la ca�a.\n2.Ignorar lo que mordi� el ansuelo y esperar a algo no tan fuerte.\n";
    
    do
    {
        cin >> ans; verify(ans);
        switch (ans)
        {
        case 1:
            type("Pronto jal� de la ca�a y despu�s de mucho luchar, con bastante esfuerzo, logr� sacar un gran pez que lo acompa�ar�a esa noche.\n");  
            break;
        case 2:
            type("test"); break;
        default:
            cout << "Ingrese opcion valida. \n"; break;
        }
    } while (ans != 1 && ans != 2);



  
}


