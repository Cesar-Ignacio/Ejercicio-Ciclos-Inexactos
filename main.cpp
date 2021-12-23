#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

#include "prototipo.h"
#include "Definicion.h"
#include "Punto.h"

int main()
{
    int opc=1;


    while(opc!=0)
    {
        cout<<"Ejercicios con Ciclos Inexactos"<<endl;
        cout<<"********************************"<<endl;
        cout<<"Salir 0"<<endl;
        cout<<"Ejercicio:_4"<<endl;
        cout<<"Ejercicio:_6"<<endl;
        cout<<"********************************"<<endl;
        cout<<"Opcion:";
        opc=AloNumeroI();

        system("cls");

        PuntoX(opc);
    }


    return 0;
}
