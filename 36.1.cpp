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
   double a,c;

    cout << "Ingrese el valor de los catetos: ";
    cin >> a;
    
    c= 2 * sqrt(pow(a,2));

    cout << "La Hipotenusa es: " << c << endl;


    return 0;
}