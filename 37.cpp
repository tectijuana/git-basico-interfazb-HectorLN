#include <iostream>
#include <math.h>
#include <cmath>

//Problema 37 capitulo 8
//Una ciudad pequeña del oeste de Kansa ideo un indice de contaminacion tal que 37 es aceptable; de 37 a 55 es desagradable; 
// y arriba de 55 es peligroso. Correr un programa que acepte un indice de contaminacion como dato e imprimir la descripcion apropiada

//User  Hector Lucero
//Date 25/03/2022
using namespace std;

int main()
{
    double conta;

    cout << "Ingrese el indice de contaminacion: ";
    cin  >> conta;

    if(conta <= 37)
    {
        cout << "El indice de contaminacion es aceptable" << endl;
    }

    if(37< conta <= 55)
    {
        cout << "El indice de contaminacion es desagradable" << endl;
    }

    if(conta > 55)
    {
        cout << "El indice de contaminacion es peligroso" << endl;
    }




    return 0;
}