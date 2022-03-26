#include <iostream>
#include <math.h>
#include <cmath>

//Problema 28 capitulo 3
//IntrodUcir X, la longit de un lado de triangulo equilatero y calcula su perimetro

//User  Hector Lucero
//Date 25/03/2022
using namespace std;

int main()
{
   double l, p;

    cout << "Introduce la longitud de los lados del triangulo equilatero: ";
    cin >> l;

    p = l * 3;

    cout << "El perimetro del triangulo es " << p << endl;


    return 0;
}