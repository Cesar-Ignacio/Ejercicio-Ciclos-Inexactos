#ifndef DEFINICION_H_INCLUDED
#define DEFINICION_H_INCLUDED



void PuntoX(int punto)
{
    if(punto==4)
    {
        Punto_4();
    }
    else if(punto==6)
    {
        Punto_6();
    }
}



float AloNumeroF()
{
    char numero[10];
    int ccc=1,x=0;
    bool null=true;


    while(ccc!=0)
    {
        cin>>numero;
        ccc=0;
        x=0;
        null=true;
         while(null)
        {
            if(numero[x]=='\0')
            {
                null=false;
            }
            else if(((int)numero[x]<47 || (int)numero[x]>57) && ((int)numero[x]!=46) && ((int)numero[x]!=45))
            {
                ccc++;
            }
            x++;
        }
    }

    return atof(numero);



}

int AloNumeroI()
{
    char numero[10];
    int ccc=1,x=0;
    bool null=true;


    while(ccc!=0)
    {
        cin>>numero;
        ccc=0;
        x=0;
        null=true;
         while(null)
        {
            if(numero[x]=='\0')
            {
                null=false;
            }
            else if(((int)numero[x]<47 || (int)numero[x]>57) && ((int)numero[x]!=46) && ((int)numero[x]!=45))
            {
                ccc++;
            }
            x++;
        }
    }

    return atoi(numero);


}

void MaxyMin(float num1,float num2, float *maxi, float *mini)
{
    if(num1>num2)
    {
        *maxi=num1;
        *mini=num2;
    }
    else
    {
        *maxi=num2;
        *mini=num1;
    }
}

#endif // DEFINICION_H_INCLUDED
