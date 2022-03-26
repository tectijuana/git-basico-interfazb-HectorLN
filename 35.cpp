#include <iostream>
#include <math.h>
#include <cmath>

//Problema 35 capitulo 8
//Encuentra el valor total de las resistencias

//User  Hector Lucero
//Date 25/03/2022
using namespace std;

int main()
{
    double RT, R1, R2, R3;

    cout << "Ingrese el valor de la primera resistencia: ";
    cin >> R1;

    cout << "Ingrese el valor de la segunda resistencia: ";
    cin >> R2;

    cout << "Ingrese el valor de la tercera resistencia: ";
    cin >> R3;

    RT = 1 / ((1/R1) + (1/R2) + (1/R3));

    cout << "La resistencia total es " << RT << endl;




    return 0;
}