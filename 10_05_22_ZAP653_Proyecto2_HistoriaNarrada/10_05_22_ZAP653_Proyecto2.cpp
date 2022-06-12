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
#include <cstdlib>

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

void loop(int repeat)
{
    while (true)
    {
        if (!ReadInt(repeat))
        {
            cout << "Ingrese un valor válido.\n";
            cin >> repeat;
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
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
        cout << type[i];
    }
}

int main()
{
    setlocale(LC_ALL, "spanish");

    int ans = 0, choice1=0, choice2=0, choice3=0, choice4=0;
    string intro; string ln; string name; int repeat=0;
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

    do {
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

    PlaySound(TEXT("music1.wav"), NULL, SND_LOOP | SND_ASYNC);
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
    PlaySound(NULL, NULL, 0);

    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("¿Qué deseas hacer?\n\n"); cout << "1. Tirar de la caña.\n2. Ignorar lo que mordió el ansuelo y esperar a algo no tan fuerte.\n";
    PlaySound(NULL, NULL, 0);

    do
    {
        cin >> ans; verify(ans);
        switch (ans)
        {
        case 1:
            choice1 = 1;  
            break;
        case 2:
            choice1 = 2;
            PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
            type("En algún momento llegará el pez indicado\n");
            PlaySound(NULL, NULL, 0);
            break;
        default:
            cout << "Ingrese opcion valida. \n"; break;
        }
    } while (ans != 1 && ans != 2);

    if (choice1 == 2)
    {
        return(0);
    }
    else {
        cout<<"\n";
    }
    
    PlaySound(TEXT("music2.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("Pronto jaló de la caña y después de mucho luchar, con bastante esfuerzo, logró sacar un gran pez que lo acompañaría esa noche.\n");
    type("Sonrío y se dio las gracias a sí mismo, tomó su caña, y guardó el libro en una bolsa tejida que llevaba con él y se dirigió al lugar donde había dejado su lancha.\n");
    type("Cuando arribó a aquel sitio, se sorprendió, su lancha no estaba ahí, se metió a esa parte del lago para comprobar de que no se había hundido, pero no había señales.\n"); 
    type("¿Se la habrán robado? Pensaba que él era el único en ese lugar.\n");
    type("Quién sería capaz de robar aquel pedazo viejo de madera flotante, con un viejo motor que hacía bastante ruido, que hasta ensordecía a quien fuera manejándola.\n\n");
    PlaySound(NULL, NULL, 0);

    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("¿Qué deseas hacer?\n\n"); cout << "1. Ir a buscar la lancha.\n2. Hacer nada.\n";
    PlaySound(NULL, NULL, 0);
    
    do
    {
        cin >> ans; verify(ans);
        switch (ans)
        {
         case 1:
            choice2 = 1;
            break;
         case 2:
            choice2 = 2;
            PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
            type(name); type(" se quedó sentado y contempló el cielo estrellado esa noche. De todas maneras tenía su pescado.\n");
            PlaySound(NULL, NULL, 0);
            break;
         default:
            cout << "Ingrese opcion valida. \n"; break;
        }
    } while (ans != 1 && ans != 2);
    
    if (choice2 == 2) 
    {
       return(0);
    }
    else
    {
        cout << "\n";
    }

    PlaySound(TEXT("music3.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("Miró a su alrededor en busca de algún rastro y efectivamente, algo o alguien se robó su lancha cuando estaba concentrado en su pesca y lectura, \n"); 
    type("fue tan sigiloso que pudo hacerlo casi frente sus narices y salirse con la suya, admitió que fue una negligencia de su parte, pero no se daría por vencido,\n");
    type("admitió que fue una negligencia de su parte, pero no se daría por vencido, estaba decidido a encontrar la lancha y aquella persona quien osó a tomarla hubiera sido más gentil de su parte haberle avisado antes,\n");
    type("con gusto se la hubiera prestado e incluso ofrecerle llevarlo a su destino.\n\n");
    PlaySound(NULL, NULL, 0);

    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("¿Deseas saltar el dialogo?\n\n"); cout << "1. Sí\n2. No\n";
    PlaySound(NULL, NULL, 0);

    do
    {
        cin >> ans; verify(ans);
        switch (ans)
        {
        case 1:
            choice3 = 1;
            break;
        case 2:
            choice3 = 2;
            break;
        default:
            cout << "Ingrese opcion valida. \n"; break;
        }
    } while (ans != 1 && ans != 2);
    
    if (choice3 == 2)
    {
        PlaySound(TEXT("music4.wav"), NULL, SND_LOOP | SND_ASYNC);
        type("\nCuando lo encontrara, le iba a compartir de su pescado, ese hombre no pensaba de quien robó su lancha como un criminal, si no como alguien necesitado, no le tenía lástima, simplemente se sentía identificado,\n"); 
        type("no es que él también robara cosas, si no, que también necesitaba de algo, y ese algo era compañía, por mucho tiempo ha vivido sólo, y le reconfortó el pensar que por fin hay alguien más.Aunque si era sincero,\n");
        type("no le molestaba para nada su soledad, de hecho, aunque suene algo triste, hizo de su soledad su amiga.\n\n");
        type("Por años se preguntó que si algo nacía solo, sin llegar a conocer la compañía, sin saber que otra cosa igual podía llegar a existir, ¿se sentiría solo? \n");
        type("No sabría que existe la soledad y simplemente viviría como conoce las cosas. Pero al mismo tiempo se debatía en que sí algo podía nacer o aparecer de la nada, \n"); 
        type("sin tener alguna madre o ser que le dio vida; llegó a la conclusión de que sólo nosotros nos podíamos preguntar eso porque es como nos tocó vivir y ver que así todo era para nosotros. \n");
        PlaySound(NULL, NULL, 0);
    }
    else
    {
        cout << "\n";
    }

    PlaySound(TEXT("music5.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("\nAlzó su mano hacia su frente y entrecerró sus ojos para afinar su vista, no veía la lancha en ninguna orilla, dio vuelta y se adentró en el bosque, pero tampoco vio signos de que alguien la arrastró,\n"); 
    type("entonces, la debieron haber cargado. Siguió caminando con la esperanza de encontrarla, pero sólo iba en círculos, siempre llegaba al mismo lugar donde comenzó. \n\n");
    type("Ya estaba anocheciendo, y comenzaba a sentir hambre, una parte de él sólo quería ser egoísta, sentarse ya en donde fuera, prender una fogata y dar la lancha por perdida;\n"); 
    type("la otra quería seguir buscando, era un hombre que la paciencia era su mejor virtud.\n\n");
    PlaySound(NULL, NULL, 0);
    
    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("¿Qué deseas hacer?\n\n"); cout << "1. Sentarse y prender una fogata.\n2. Seguir buscando.\n3. Ninguna\n";
    PlaySound(NULL, NULL, 0);

    do
    {
        cin >> ans; verify(ans);
        switch (ans)
        {
        case 1:
            choice4 = 1;
            PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
            type("Se sentó y encendió la fogata. Miró a su pescado y debatió en cocinarlo. Pero suspiró y dijo:\n");
            type("-Incluso un cadaver tiene mejor suerte.\n");
            PlaySound(NULL, NULL, 0);
            break;
        case 2:
            choice4 = 2;
            PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
            type("Continúo su búsqueda hasta que cayó rendido. Abrió los ojos y se sorprendió cuando vio que estaba flotando en su lancha.\n");
            type("Miró a su alrededor y su caña seguía esperando a un pez, vió su libro abierto en una página y leyó: \n");
            type("Si lo intentas, a menudo estarás solo, pero ningún precio es demasiado alto por el privilegio de ser uno mismo.\n");
            PlaySound(NULL, NULL, 0);
            break;
        case 3:
            choice4 = 3;
            break;
        default:
            cout << "Ingrese opcion valida. \n"; break;
        }
    } while (ans != 1 && ans != 2 && ans != 3);

    if (choice4 == 1 || choice4 == 2)
    {
        return(0);
    }
    else { cout << "\n"; }

    PlaySound(TEXT("music6.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("Así que decidió no hacer ninguna de sus dos opciones, se acostó mirando el cielo, no iba a comer hasta no encontrar lo que buscaba.\n\n");
    type("Sacó una pequeña linterna y tomó el libro que no concluyó, pero se le cayó, se inclinó un poco para recogerlo, alumbró esa parte y vio que estaba abierto en la última página, \n");
    type("su curiosidad le ganó y comenzó a leer, su mente prestaba atención a cada detalle que tenía. Cuando terminó se volvió a acostar y abrazó el libro sobre su pecho.\n");
    type("Otra vez comenzó a ver el cielo, vio cómo estaba pintado con aquellas hermosas estrellas.\n\n");
    type("Pasó una hora y todavía no se movía de la misma posición, cuando de repente comenzó a reír, rió tanto que hasta le salieron un par de lágrimas de sus ojos\n");
    type("y cuando por fin dejó de hacerlo sonrió y se dijo a sí mismo: \n");
    PlaySound(NULL, NULL, 0);
    
    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("\n-Cierto, yo nunca tuve una lancha.\n\n");
    PlaySound(NULL, NULL, 0);
    
    cout << "\n";
    PlaySound(TEXT("music7.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("Historia por: Cristina Vera.\n\n");
    type("--- MÚSICA ---\n\n");
    type("* The Voice of Awakening - Energy Breaker\n"); type("** Schala's Theme - Chrono Trigger\n");
    type("*** Cry A Live - Live A Live\n"); type("**** Sorrowful Tazmily - MOTHER 3\n");
    type("*** At the Bottom of Night - Chrono Trigger\n"); type("** Sad - Terranigma\n");
    type("* Fear Of the Heavens - Secret of Mana\n"); type("\nGracias por jugar\n");
    PlaySound(NULL, NULL, 0);

    cout << "\nPresiona 1 para volver a jugar: ";
    cin >> repeat; loop(repeat);
    } while (repeat == 1);
    
}


