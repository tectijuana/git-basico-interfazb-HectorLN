#include <iostream>
#include <math.h>
#include <cmath>

//Problema 8 capitulo 3
//Encontrar el area de un rectangulo

//User  Hector Lucero
//Date 25/03/2022
using namespace std;

int main()
{
    double base, altura, area;

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    area= base * altura;

    cout << "El area del rectangulo es: " << area << endl;



    return 0;
}