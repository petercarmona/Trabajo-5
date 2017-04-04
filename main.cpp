#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
// numeros primos y qque imprima la posicion del primo

int main()
{
    int number;
    int primo;
    int divis = 0;
    int position = 0;

    cin>>number;
    int primeles[number];

    //inicialiazacion del array
    for(int i=0; i< number;i++)
    {
        primeles[i] = 0;
    }

    //metodo
    for(int i=1; i<=number; i++)
    {
        primo = i;

        for(int j=1; j<=primo;j++)
        {
            //printf(" i=[%d] , j=[%d] con primo->[%d] divis=[%d]\n",i,j, primo, divis);

            if(primo%j==0)
            {
                divis++;
            }
            if(divis>2)
            {
                break;
            }
            //printf(" divis = %d \n",divis);

        }
        //printf(" divis totales = %d\n\n",divis);
       // printf(" ");
        if(divis == 2)
        {
            primeles[position] = primo;
            position++;
        }
        divis = 0;
    }
    for(int i = 0; i< position;i++)
        cout<<"position "<<i<<"->"<< primeles[i]<<endl;
    _getch();

    return 0;
}
