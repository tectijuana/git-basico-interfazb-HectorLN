#include <iostream>
#include <math.h>
#include <cmath>

//Problema 9 capitulo 3
//Encontrar el tercer lado de un traingulo rectangulo utilizando el teorema de pitagoras

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

    c = 180.00 - a;

    d = 180 - (a + b + c);

    cout << c;
    cout << d;



    return 0;
}