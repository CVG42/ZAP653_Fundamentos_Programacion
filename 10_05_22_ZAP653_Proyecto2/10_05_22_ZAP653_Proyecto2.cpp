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
            cout << "Ingrese un valor v�lido (Entero).\n";
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
            cout << "Ingrese un valor v�lido.\n";
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

    PlaySound(TEXT("music1.wav"), NULL, SND_LOOP | SND_ASYNC);
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
    PlaySound(NULL, NULL, 0);

    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("�Qu� deseas hacer?\n\n"); cout << "1. Tirar de la ca�a.\n2. Ignorar lo que mordi� el ansuelo y esperar a algo no tan fuerte.\n";
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
            type("En alg�n momento llegar� el pez indicado\n");
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
    type("Pronto jal� de la ca�a y despu�s de mucho luchar, con bastante esfuerzo, logr� sacar un gran pez que lo acompa�ar�a esa noche.\n");
    type("Sonr�o y se dio las gracias a s� mismo, tom� su ca�a, y guard� el libro en una bolsa tejida que llevaba con �l y se dirigi� al lugar donde hab�a dejado su lancha.\n");
    type("Cuando arrib� a aquel sitio, se sorprendi�, su lancha no estaba ah�, se meti� a esa parte del lago para comprobar de que no se hab�a hundido, pero no hab�a se�ales.\n"); 
    type("�Se la habr�n robado? Pensaba que �l era el �nico en ese lugar.\n");
    type("Qui�n ser�a capaz de robar aquel pedazo viejo de madera flotante, con un viejo motor que hac�a bastante ruido, que hasta ensordec�a a quien fuera manej�ndola.\n\n");
    PlaySound(NULL, NULL, 0);

    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("�Qu� deseas hacer?\n\n"); cout << "1. Ir a buscar la lancha.\n2. Hacer nada.\n";
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
            type(name); type(" se qued� sentado y contempl� el cielo estrellado esa noche. De todas maneras ten�a su pescado.\n");
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
    type("Mir� a su alrededor en busca de alg�n rastro y efectivamente, algo o alguien se rob� su lancha cuando estaba concentrado en su pesca y lectura, \n"); 
    type("fue tan sigiloso que pudo hacerlo casi frente sus narices y salirse con la suya, admiti� que fue una negligencia de su parte, pero no se dar�a por vencido,\n");
    type("admiti� que fue una negligencia de su parte, pero no se dar�a por vencido, estaba decidido a encontrar la lancha y aquella persona quien os� a tomarla hubiera sido m�s gentil de su parte haberle avisado antes,\n");
    type("con gusto se la hubiera prestado e incluso ofrecerle llevarlo a su destino.\n\n");
    PlaySound(NULL, NULL, 0);

    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("�Deseas saltar el dialogo?\n\n"); cout << "1. S�\n2. No\n";
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
        type("\nCuando lo encontrara, le iba a compartir de su pescado, ese hombre no pensaba de quien rob� su lancha como un criminal, si no como alguien necesitado, no le ten�a l�stima, simplemente se sent�a identificado,\n"); 
        type("no es que �l tambi�n robara cosas, si no, que tambi�n necesitaba de algo, y ese algo era compa��a, por mucho tiempo ha vivido s�lo, y le reconfort� el pensar que por fin hay alguien m�s.Aunque si era sincero,\n");
        type("no le molestaba para nada su soledad, de hecho, aunque suene algo triste, hizo de su soledad su amiga.\n\n");
        type("Por a�os se pregunt� que si algo nac�a solo, sin llegar a conocer la compa��a, sin saber que otra cosa igual pod�a llegar a existir, �se sentir�a solo? \n");
        type("No sabr�a que existe la soledad y simplemente vivir�a como conoce las cosas. Pero al mismo tiempo se debat�a en que s� algo pod�a nacer o aparecer de la nada, \n"); 
        type("sin tener alguna madre o ser que le dio vida; lleg� a la conclusi�n de que s�lo nosotros nos pod�amos preguntar eso porque es como nos toc� vivir y ver que as� todo era para nosotros. \n");
        PlaySound(NULL, NULL, 0);
    }
    else
    {
        cout << "\n";
    }

    PlaySound(TEXT("music5.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("\nAlz� su mano hacia su frente y entrecerr� sus ojos para afinar su vista, no ve�a la lancha en ninguna orilla, dio vuelta y se adentr� en el bosque, pero tampoco vio signos de que alguien la arrastr�,\n"); 
    type("entonces, la debieron haber cargado. Sigui� caminando con la esperanza de encontrarla, pero s�lo iba en c�rculos, siempre llegaba al mismo lugar donde comenz�. \n\n");
    type("Ya estaba anocheciendo, y comenzaba a sentir hambre, una parte de �l s�lo quer�a ser ego�sta, sentarse ya en donde fuera, prender una fogata y dar la lancha por perdida;\n"); 
    type("la otra quer�a seguir buscando, era un hombre que la paciencia era su mejor virtud.\n\n");
    PlaySound(NULL, NULL, 0);
    
    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("�Qu� deseas hacer?\n\n"); cout << "1. Sentarse y prender una fogata.\n2. Seguir buscando.\n3. Ninguna\n";
    PlaySound(NULL, NULL, 0);

    do
    {
        cin >> ans; verify(ans);
        switch (ans)
        {
        case 1:
            choice4 = 1;
            PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
            type("Se sent� y encendi� la fogata. Mir� a su pescado y debati� en cocinarlo. Pero suspir� y dijo:\n");
            type("-Incluso un cadaver tiene mejor suerte.\n");
            PlaySound(NULL, NULL, 0);
            break;
        case 2:
            choice4 = 2;
            PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
            type("Contin�o su b�squeda hasta que cay� rendido. Abri� los ojos y se sorprendi� cuando vio que estaba flotando en su lancha.\n");
            type("Mir� a su alrededor y su ca�a segu�a esperando a un pez, vi� su libro abierto en una p�gina y ley�: \n");
            type("Si lo intentas, a menudo estar�s solo, pero ning�n precio es demasiado alto por el privilegio de ser uno mismo.\n");
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
    type("As� que decidi� no hacer ninguna de sus dos opciones, se acost� mirando el cielo, no iba a comer hasta no encontrar lo que buscaba.\n\n");
    type("Sac� una peque�a linterna y tom� el libro que no concluy�, pero se le cay�, se inclin� un poco para recogerlo, alumbr� esa parte y vio que estaba abierto en la �ltima p�gina, \n");
    type("su curiosidad le gan� y comenz� a leer, su mente prestaba atenci�n a cada detalle que ten�a. Cuando termin� se volvi� a acostar y abraz� el libro sobre su pecho.\n");
    type("Otra vez comenz� a ver el cielo, vio c�mo estaba pintado con aquellas hermosas estrellas.\n\n");
    type("Pas� una hora y todav�a no se mov�a de la misma posici�n, cuando de repente comenz� a re�r, ri� tanto que hasta le salieron un par de l�grimas de sus ojos\n");
    type("y cuando por fin dej� de hacerlo sonri� y se dijo a s� mismo: \n");
    PlaySound(NULL, NULL, 0);
    
    PlaySound(TEXT("TextSFX.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("\n-Cierto, yo nunca tuve una lancha.\n\n");
    PlaySound(NULL, NULL, 0);
    
    cout << "\n";
    PlaySound(TEXT("music7.wav"), NULL, SND_LOOP | SND_ASYNC);
    type("Historia por: Cristina Vera.\n\n");
    type("--- M�SICA ---\n\n");
    type("* The Voice of Awakening - Energy Breaker\n"); type("** Schala's Theme - Chrono Trigger\n");
    type("*** Cry A Live - Live A Live\n"); type("**** Sorrowful Tazmily - MOTHER 3\n");
    type("*** At the Bottom of Night - Chrono Trigger\n"); type("** Sad - Terranigma\n");
    type("* Fear Of the Heavens - Secret of Mana\n"); type("\nGracias por jugar\n");
    PlaySound(NULL, NULL, 0);

    cout << "\nPresiona 1 para volver a jugar: ";
    cin >> repeat; loop(repeat);
    } while (repeat == 1);
    
}


