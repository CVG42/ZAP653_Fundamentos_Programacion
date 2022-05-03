/* 05_04_22_ZAP653_P5_Condiciones_Simples :
Cristina Vera Garcia.
En este programa se van a comprobar unos datos ya definidos.
Se le va a pedir al usuario ingresarlos, si son correctos puede continuar, si no lo son se le va a pedir que los vuelva a ingresar.
*/
#include <iostream>

using namespace std;

int main()
{
    string name, st, cd, edo, rh;
    char sexo;
    int age, cp;
    double h;
    float w;

    cout << "Bienvenido. Vamos a comprobar sus datos en el sistema.\nEscribe lo que se le pida y despues presione ENTER.";
    //Condicion para nombre
    do
    {
        cout << "\nIngresa tu nombre: " << endl;
        cin >> name;
        if (name == "Maria")
        {
            cout << "\nEl dato es correcto. Puedes continuar.\n";
        }
        else { cout << "\nEl dato es incorrecto, vuelve a ingresarlo.\n"; }
    } while (name != "Maria");
    //Condicion para sexo
    do
    {
        cout << "\nIngresa tu sexo (Escribe F para femenino y M para masculino): " << endl;
        cin >> sexo;
        if (sexo == 'F')
        {
            cout << "\nEl dato es correcto. Puedes continuar.\n";
        }
        else { cout << "\nEl dato es incorrecto, vuelve a ingresarlo.\n"; }
    } while (sexo != 'F');
    //condicion para edad
    do
    {
        cout << "\nIngresa tu edad: " << endl;
        cin >> age;
        if (age == 20)
        {
            cout << "\nEl dato es correcto. Puedes continuar.\n";
        }
        else { cout << "\nEl dato es incorrecto, vuelve a ingresarlo.\n"; }
    } while (age != 20);
    //condicion para tu Estado de residencia
    do
    {
        cout << "\nIngresa tu estado de residencia: " << endl;
        cin >> edo;
        if (edo == "Jalisco")
        {
            cout << "\nEl dato es correcto. Puedes continuar.\n";
        }
        else { cout << "\nEl dato es incorrecto, vuelve a ingresarlo.\n"; }
    } while (edo != "Jalisco");
    //Condicion para tu ciudad de residencia
    do
    {
        cout << "\nIngresa tu ciudad de residencia: " << endl;
        cin >> cd;
        if (cd == "Guadalajara")
        {
            cout << "\nEl dato es correcto. Puedes continuar.\n";
        }
        else { cout << "\nEl dato es incorrecto, vuelve a ingresarlo.\n"; }
    } while (cd != "Guadalajara");
    //Condicion para tu direccion actual
    do
    {
        cout << "\nIngresa tu direccion actual: " << endl;
        cin >> st;
        if (st == "Random")
        {
            cout << "\nEl dato es correcto. Puedes continuar.\n";
        }
        else { cout << "\nEl dato es incorrecto, vuelve a ingresarlo.\n"; }
    } while (st != "Random");
    //Condicion para codigo postal
    do
    {
        cout << "\nIngresa tu codigo postal: " << endl;
        cin >> cp;
        if (cp == 65432)
        {
            cout << "\nEl dato es correcto. Puedes continuar.\n";
        }
        else { cout << "\nEl dato es incorrecto, vuelve a ingresarlo.\n"; }
    } while (cp != 65432);
    //Condicion para tu altura
    do
    {
        cout << "\nIngresa tu altura: " << endl;
        cin >> h;
        if (h == 1.60)
        {
            cout << "\nEl dato es correcto. Puedes continuar.\n";
        }
        else { cout << "\nEl dato es incorrecto, vuelve a ingresarlo.\n"; }
    } while (h != 1.60);
    //Condicion para tu peso
    do
    {
        cout << "\nIngresa tu peso: " << endl;
        cin >> w;
        if (w == 55.5)
        {
            cout << "\nEl dato es correcto. Puedes continuar.\n";
        }
        else { cout << "\nEl dato es incorrecto, vuelve a ingresarlo.\n"; }
    } while (w != 55.5);
    //Condicion para tu tipo de sangre
    do
    {
        cout << "\nIngresa tu tipo de sangre: " << endl;
        cin >> rh;
        if (rh == "A+")
        {
            cout << "\nEl dato es correcto. Puedes continuar.\n";
        }
        else { cout << "\nEl dato es incorrecto, vuelve a ingresarlo.\n"; }
    } while (rh != "A+");

    cout << "\nHemos terminado de comprobar los datos. El registro que tenemos es el siguiente:\n";
    cout << "-Nombre: " << name << "\n";
    cout << "-Sexo: " << sexo << "\n";
    cout << "-Edad: " << age << "\n";
    cout << "-Estado: " << edo << "\n";
    cout << "-Ciudad: " << cd << "\n";
    cout << "-Direccion: " << st << "\n";
    cout << "-Codigo postal: " << cp << "\n";
    cout << "-Altura: " << h << "\n";
    cout << "-Peso: " << w << "\n";
    cout << "-Tipo de sangre: " << rh << "\n";

    return 0;
}