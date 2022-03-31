// 31_03_22_ZAP653_Condicion_multiple.cpp 
//Cristina Vera Garcia
//En este programa se va a hacer una calculadora sencilla para las operaciones +,-,*,/ 

#include <iostream>

int main()
{
    float n1, n2, x; int opcion;
    std::cout << "Elige una operacion que quieras realizar:\n\n1. Suma \n2. Resta \n3. Multiplicacion \n4. Division\n";
    std::cout<<"\nPara escoger solo ingresa el numero de las opciones y presiona ENTER:\n";
    std::cin >> opcion;
    //Sintaxis del switch case.
    switch(opcion)
    {

    case 1: std::cout << "\nHas elegido suma. Ingresa el primer numero: \n";
        std::cin >> n1;
        std::cout << "Ingresa el segundo numero:\n";
        std::cin >> n2;
        x = n1 + n2;
        std::cout << "El resultado de la operacion es: " << x;
        break;
            
    case 2: std::cout << "\nHas elegido resta. Ingresa el primer numero: \n";
        std::cin >> n1;
        std::cout << "Ingresa el segundo numero:\n";
        std::cin >> n2;
        x = n1 - n2;
        std::cout << "El resultado de la operacion es: " << x;
        break;
        
    case 3: std::cout << "\nHas elegido multiplicacion. Ingresa el primer numero: \n";
        std::cin >> n1;
        std::cout << "Ingresa el segundo numero:\n";
        std::cin >> n2;
        x = n1 * n2;
        std::cout << "El resultado de la operacion es: " << x;
        break;
        
    case 4: std::cout << "\nHas elegido division. Ingresa el primer numero: \n";
        std::cin >> n1;
        std::cout << "Ingresa el segundo numero:\n";
        std::cin >> n2;
        x = n1 / n2;
        std::cout << "El resultado de la operacion es: " << x;
        break;

    default: std::cout << "Ingresaste algo que no tengo contemplado... \n";
       
    }

    
       
}

