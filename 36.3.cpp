#include <iostream>
#include <math.h>
#include <cmath>

//Problema 18 capitulo 3
//Introducir la longitud de los lados de un triangulo rectangulo y calcular el perimetro

//User  Hector Lucero
//Date 25/03/2022
using namespace std;

int main()
{
    double a, b, c, p;

    cout << "Ingrese el valor de los catetos: ";
    cin >> a >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    p = a + b + c;

    cout << "El perimetro del trinagulo es: " << p << endl;


    return 0;
}