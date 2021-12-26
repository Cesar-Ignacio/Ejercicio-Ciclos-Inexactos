#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED


void Punto_4()
{
    Enunciado_4();

    float num1=0,num2=0,maxi=0,mini=0;
    float num=0;
    cout<<"Primer numero:";
    num1=AloNumeroF();
    cout<<"Segundo numero:";
    num2=AloNumeroF();

    MaxyMin(num1,num2,&maxi,&mini);
    num=mini+1;
    while(num!=maxi)
    {

        cout<<"Numero :" <<num<<endl;
        num++;
    }

    cin.get();
    cin.get();
    system("cls");



}

void Enunciado_4()
{
   cout<<"Ejercicio 4"<<endl;
   cout<<"Enunciado"<<endl;
   cout<<"4) Hacer un programa para que el usuario ingrese dos números y luego el programa muestre "<<endl;
   cout<<"por pantalla los números entre el menor y el mayor de ambos. "<<endl;
   cout<<"Por ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15; y si el "<<endl;
   cout<<"usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25. (siempre se emiten en "<<endl;
   cout<<"orden creciente) "<<endl;
   cout<<"***************************"<<endl;
}

void Punto_6()
{
    int numero=0,x=1;
    int canPrimos=0;

    Enunciado_6();

    cout<<"Ingrese numero:";
    numero=AloNumeroF();

    while(canPrimos<=2 && x<=numero)
    {
        if(numero%x==0)
        {
            canPrimos++;
        }
        x++;
    }

    if(canPrimos==2)
    {
        cout<<"El numero es primo"<<endl;
    }
    else
    {
        cout<<"El numero no es primo"<<endl;
    }

    cin.get();
    cin.get();

    system("cls");


}

void Enunciado_6()
{
    cout<<"Ejercicio 6"<<endl;
    cout<<"Enuciado:"<<endl;
    cout<<"6) Hacer un programa para ingresar por teclado un número superior a 1 y luego informar si el "<<endl;
    cout<<"mismo es número primo. "<<endl;
    cout<<"***********************"<<endl;

}

void Punto_7()
{
    float numero,maxi=0,posmax=0;
    int indice=0;
    Enunciado_7();
    while(numero!=0)
    {

        cout<<"Ingrese numero:";
        numero=AloNumeroF();

        if(indice==0)
        {
            maxi=numero;
            posmax=indice;
        }
        else if(numero>maxi)
        {
            maxi=numero;
            posmax=indice;
        }

        indice++;

    }


    cout<<"Maximo numero :"<<maxi<<endl;
    cout<<"Posicion :"<<posmax<<endl;


    cin.get();
    cin.get();
    system("cls");
}

void Enunciado_7()
{
   cout<<"Enuciado 7"<<endl;
   cout<<"7) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un "<<endl;
   cout<<"cero. Se pide determinar e informar el máximo de la lista y su posición dentro de la misma."<<endl;
   cout<<"Suponer que los números pueden ser todos positivos, todos negativos o combinados."<<endl;
   cout<<"***************"<<endl;
}

void Punto_8()
{
    float numero=0,anterioNumero=0;
    int cantNumeros=0,ordenado=0;
    Enunciado_8();

    cout<<"Ingrese numero:";
    numero=AloNumeroF();

    while(numero!=0)
    {
        anterioNumero=numero;

        cantNumeros++;

        if(numero>=anterioNumero)
        {
            ordenado++;
        }

        cout<<"Ingrese numero:";
        numero=AloNumeroF();

    }


    if(cantNumeros==ordenado)
    {
        cout<<"Los numero estan ordenados"<<endl;
    }
    else{
        cout<<"Los numero estan desordenados"<<endl;
    }

    cin.get();
    cin.get();
    system("cls");
}

void Enunciado_8()
{
  cout<<"8) Dada una lista de números enteros todos distintos entre sí y que finaliza con un cero,"<<endl;
cout<<"determinar e informar con un cartel aclaratorio si los mismos están ordenados de menor a "<<endl;
cout<<"mayor."<<endl;
cout<<"**************************"<<endl;
}

#endif // PUNTO_H_INCLUDED
