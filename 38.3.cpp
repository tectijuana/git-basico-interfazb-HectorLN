#include <iostream>
#include <math.h>
#include <cmath>

//Problema 29 capitulo 3
//Determina el perimetro de un triangulo rectangulo dadas las longitudes de los catetos

//User  Hector Lucero
//Date 25/03/2022
using namespace std;

int main()
{
   double a,c,p;

    cout << "Ingrese el valor de los catetos: ";
    cin >> a;
    
    c= 2 * sqrt(pow(a,2));

    p = (a *2) + c;

    cout << "El perimetro del triangulo es " << p << endl;


    return 0;
}