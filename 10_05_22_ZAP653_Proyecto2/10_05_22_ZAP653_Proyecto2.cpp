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
            cout << "Ingrese un valor válido (Entero).\n";
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
    cout << setw(165) << right << "-????\n";
    PlaySound(NULL, NULL, 0);

    system("pause");
    system("CLS");

    type(name); type(" sostenía el libro que contenía aquellas palabras. Lo ha leído una y otra vez, pero aún así, nunca lo ha terminado, siempre llegaba a la misma parte y no pasaba de ahí.\n");
    type("Estaba sentado al borde de un río esperando a que algo mordiera el anzuelo de la caña de pescar que él mismo hizo ya años atrás.\n");
    type("Cuánto tiempo había pasado desde que llegó, ¿una hora, dos?, ¿acaso habrán sido sólo treinta minutos? No lo sabe.\n");
    type("Sólo ha estado leyendo aquel libro viejo sin autor que encontró un día, tampoco sabe en dónde o por qué llegó a sus manos.\n");
    cout << "\n";

    type("¿Era ignorancia por parte de "); type(name);  type("? Definitivamente no, ¿sería falta de atención al tiempo y detalles?\n");
    type("Podría sonar a que ese era el caso, pero puede ser falta de atención si se desconoce a qué se le deba prestar atención y a qué no,\n");
    type("de aquí volvemos a la ignorancia, pero tampoco podemos llamar a alguien ignorante sólo por no saber, no puede ser ignorancia si aquello que no se sabe no existe.\n");
    type("La gente le dice ignorancia para referirse a los hechos y conocimientos que otros no tiene, pero ellos sí, y esta trae bastantes defectos.\n");
    cout << "\n";

    type("El sólo era alguien que quería pescar algo rico para disfrutarlo en su cena, entonces, fue cuando por fin algo tiró de la caña con mucha fuerza.\n");
    type("¿Qué deseas hacer?\n\n"); cout << "1. Tirar de la caña.\n2.Ignorar lo que mordió el ansuelo y esperar a algo no tan fuerte.\n";
    
    do
    {
        cin >> ans; verify(ans);
        switch (ans)
        {
        case 1:
            type("Pronto jaló de la caña y después de mucho luchar, con bastante esfuerzo, logró sacar un gran pez que lo acompañaría esa noche.\n");  
            break;
        case 2:
            type("test"); break;
        default:
            cout << "Ingrese opcion valida. \n"; break;
        }
    } while (ans != 1 && ans != 2);



  
}


