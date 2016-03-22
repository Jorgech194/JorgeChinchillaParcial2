#include <iostream>

using namespace std;

int num[4];
int total=0, n=0, r=0;
double pro=0;

void IngresoDatos(int num[], int &n, int &total)
{   int i;
    for (i=0; i<5; i++)
    {   cout<<"Ingrese numero ["<<i<<"]: ";
        cin>> num[i];

        if ((num[i]%2)==1)
        {n++;
        total+=num[i];
        }
    }
}
