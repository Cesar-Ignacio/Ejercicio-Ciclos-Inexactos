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

#endif // PUNTO_H_INCLUDED
