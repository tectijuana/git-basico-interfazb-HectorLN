#include <iostream>
#include <math.h>
#include <cmath>

//Problema 12 capitulo 3
//Encontrar el tercer angulo de un traingulo y verificar que dan 0 absoluto

//User  Hector Lucero
//Date 25/03/2022
using namespace std;

int main()
{
    double a, b, c, d;

    cout << "Ingrese el valor del angulo A: ";
    cin >> a;

    cout << "Ingrese el valor del angulo B: ";
    cin >> b;

    c = 180 - (a + b);

    d = a + b + c;

    if (d != 180)
    {
        cout << "No es un triangulo" << endl;
    }


        return 0;
}