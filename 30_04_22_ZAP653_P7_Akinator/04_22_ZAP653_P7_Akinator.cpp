// 04_22_ZAP653_P7_Akinator.cpp : Cristina Vera Garcia. zap653.
// Este programa es para un Akinator, donde tienes que pensar en un personaje y se va a adivinar el personaje elegido despues de hacer una serie de preguntas.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dps_h[8] = { "Cassidy","Doomfist","Genji","Hanzo","Junkrat","Reaper","Soldier 76","Torbjorn"}; //personajes dps hombres
    string supp_h[2] = { "Baptiste","Lucio" }; //personajes support hombres
    string tank_h[3] = { "Reinhardt","Roadhog","Sigma" }; //personajes tanque hombres
    string dps_m[7] = {"Ashe","Mei","Pharah","Sombra","Symmetra","Tracer","Widow Maker"}; //personajes dps mujeres
    string supp_m[4] = {"Ana","Brigitte","Mercy","Moira"}; //personajes support mujeres
    string tank_m[2]={"D.VA","Zarya"}; //personajes tanque mujeres
    string robot[4] = {"Bastion","Zenyatta","Orisa","Echo"}; //personajes robot
    string animal[2] = { "Winston","Wrecking ball" }; //personajes animales
    bool respuesta=true, ans=true;

        cout << "Bienvenido, piensa en un personaje jugable de Overwatch y se va a adivinar en el que estes pensando" << endl;
        cout << "Para contestar a las preguntas escribe 1 si es VERDADERO o 0 si es FALSO." << endl;
    do {
        cout << "\nTu personaje es hombre?: ";
        cin >> respuesta;
        if (respuesta == true)
        {
            //preguntas para dps hombres
            cout << "\nTu personaje es un dps?: ";
            cin >> respuesta;
            if (respuesta == true)
            {
                cout << "\nTu personaje es japones?: ";
                cin >> respuesta;
                if (respuesta == true)
                {
                    cout << "\nTu personaje lanza flechas?: ";
                    cin >> respuesta;
                    if (respuesta == true)
                    {
                        cout << "\nTu personaje es: " << dps_h[3]; //para Hanzo
                    }
                    else { cout << "\nTu personaje es: " << dps_h[2]; } //para Genji
                }
                else
                {
                    cout << "\nTu personaje coloca una torreta?: ";
                    cin >> respuesta;
                    if (respuesta == true)
                    {
                        cout << "\nTu personaje es: " << dps_h[7]; //Para Torb
                    }
                    else
                    {
                        cout << "\nTu personaje utiliza una pistola o revolver?: ";
                        cin >> respuesta;
                        if (respuesta == true)
                        {
                            cout << "\nTu personaje utiliza dos pistolas?: ";
                            cin >> respuesta;
                            if (respuesta == true)
                            {
                                cout << "\nTu personaje es: " << dps_h[5]; //Para Reaper
                            }
                            else
                            {
                                cout << "\nTu personaje utiliza un revolver?: ";
                                cin >> respuesta;
                                if (respuesta == true)
                                {
                                    cout << "\nTu personaje es: " << dps_h[0]; //Para Cassidy
                                }
                                else { cout << "\nTu personaje es: " << dps_h[6]; } //Para Soldier
                            }
                        }
                        else
                        {
                            cout << "\nTu personaje utiliza un lanza-granadas?: ";
                            cin >> respuesta;
                            if (respuesta == true)
                            {
                                cout << "\nTu personaje es: " << dps_h[4]; //Para Junkrat
                            }
                            else { cout << "\nTu personaje es: " << dps_h[1]; } //Para Doomfist
                        }
                    }
                }
            }
            else //Preguntas para tanque hombres
            {
                cout << "\nTu personaje es un tanque?: ";
                cin >> respuesta;
                if (respuesta == true)
                {
                    cout << "\nTu personaje utiliza una barrera?: ";
                    cin >> respuesta;
                    if (respuesta == true)
                    {
                        cout << "\nTu personaje usa una armadura de caballero?: ";
                        cin >> respuesta;
                        if (respuesta == true)
                        {
                            cout << "\nTu personaje es: " << tank_h[0]; //Para Rein
                        }
                        else { cout << "\nTu personaje es: " << tank_h[2]; } //Para Sigma
                    }
                    else { cout << "\nTu personaje es: " << tank_h[1]; }//Para Roadhog
                }
                else //preguntas para support hombres
                {
                    cout << "\nTu personaje puede poner un campo de invunerabilidad?: ";
                    cin >> respuesta;
                    if (respuesta == true)
                    {
                        cout << "\nTu personaje es: " << supp_m[0]; //Para Baptiste
                    }
                    else { cout << "\nTu personaje es: " << supp_m[1]; }//Para lucio
                }
            }
        }
        //aqui van las preguntas para los personajes mujeres
        else
        {
            cout << "\nTu personaje es una mujer?: ";
            cin >> respuesta;
            //para support mujeres
            if (respuesta == true)
            {
                cout << "\nTu personaje es un support?: ";
                cin >> respuesta;
                if (respuesta == true)
                {
                    cout << "\nTu personaje puede dar boost?: ";
                    cin >> respuesta;
                    if (respuesta == true)
                    {
                        cout << "\nTu personaje puede revivir a alguien?: ";
                        cin >> respuesta;
                        if (respuesta == true)
                        {
                            cout << "\nTu personaje es: " << supp_m[2]; //Para Mercy
                        }
                        else { cout << "\nTu personaje es: " << supp_m[0]; } // Para Ana
                    }
                    else
                    {
                        cout << "\nTu personaje puede dar armor?: ";
                        cin >> respuesta;
                        if (respuesta == true)
                        {
                            cout << "Tu personaje es: " << supp_m[1]; //Para Brigitte
                        }
                        else { cout << "\nTu personaje es: " << supp_m[3]; } //Para Moira
                    }
                }
                //para dps mujeres
                else
                {
                    cout << "\nTu personaje es un dps?: ";
                    cin >> respuesta;
                    if (respuesta == true)
                    {
                        cout << "\nTu personaje es sniper?: ";
                        cin >> respuesta;
                        if (respuesta == true)
                        {
                            cout << "\nTu personaje puede lanzar una dinamita?: ";
                            cin >> respuesta;
                            if (respuesta == true)
                            {
                                cout << "\nTu personaje es: " << dps_m[0]; //Para Ashe
                            }
                            else { cout << "\nTu personaje es: " << dps_m[6]; } //Para Widow
                        }
                        else
                        {
                            cout << "\nTu personaje puede teletransportarse o retroceder en el tiempo?: ";
                            cin >> respuesta;
                            if (respuesta == true)
                            {
                                cout << "\nTu personaje puede hackear a otros?: ";
                                cin >> respuesta;
                                if (respuesta == true)
                                {
                                    cout << "\nTu personaje es: " << dps_m[3];//Para Sombra
                                }
                                else
                                {
                                    cout << "\nTu personaje coloca torretas?: ";
                                    cin >> respuesta;
                                    if (respuesta == true)
                                    {
                                        cout << "\nTu personaje es: " << dps_m[4];//Para Symm
                                    }
                                    else { cout << "\nTu personaje es: " << dps_m[5]; } //Para Tracer
                                }
                            }
                            else
                            {
                                cout << "\nTu personaje utiliza hielo?: ";
                                cin >> respuesta;
                                if (respuesta)
                                {
                                    cout << "\nTu personaje es: " << dps_m[1];//Para Mei
                                }
                                else { cout << "\nTu personaje es: " << dps_m[2]; } //Para Pharah
                            }
                        }
                    }
                    //para tanque mujeres
                    else {
                        cout << "\nTu personaje usa un mecha?: ";
                        cin >> respuesta;
                        if (respuesta == true)
                        {
                            cout << "\nTu personaje es: " << tank_m[0];//para DVA
                        }
                        else { cout << "\nTu personaje es: " << tank_m[1]; }//para Zarya
                    }
                }
            }
            else //preguntas para los robots
            {
                cout << "\n Tu personaje es un robot?: ";
                cin >> respuesta;
                if (respuesta == true)
                {
                    cout << "\nTu personaje es un dps?: ";
                    cin >> respuesta;
                    if (respuesta == true)
                    {
                        cout << "\nTu personaje se puede convertir en una torreta?: ";
                        cin >> respuesta;
                        if (respuesta == true)
                        {
                            cout << "\nTu personaje es: " << robot[0]; //para Bastion
                        }
                        else { cout << "\n Tu personaje es: " << robot[3]; } //para Echo
                    }
                    else
                    {
                        cout << "\Tu personaje es un support?: ";
                        cin >> respuesta;
                        if (respuesta == true)
                        {
                            cout << "\nTu personaje es: " << robot[1]; // para zenyatta
                        }
                        else { cout << "\nTu personaje es: " << robot[2]; } //para Orisa
                    }
                }
                else //preguntas para animales
                {
                    cout << "\nTu personaje es un gorila?: ";
                    cin >> respuesta;
                    if (respuesta == true)
                    {
                        cout << "\nTu personaje es: " << animal[0];//para Winston
                    }
                    else { cout << "\nTu personaje es: " << animal[1]; }//para Hamster
                }
            }
        }

        cout << "\n\nDeseas volver a intentarlo? Presiona 1 si quieres volver a jugar o 0 si deseas salir: ";
        cin >> ans;

    } while (ans == true);

}


