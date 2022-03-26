#include <iostream>
#include <math.h>
#include <cmath>

//Problema 2 capitulo 3
//Dada una medida angular mayor que 0 pero menor a 180. Clasifica el angulo como agudo, recto o obtuso

//User  Hector Lucero
//Date 25/03/2022
using namespace std;

int main()
{
    double ang;

    cout << "Ingrese el angulo: ";
    cin >> ang;

    if(ang < 90)
    {
        cout << "El angulo se clasifica como agudo " << endl;
    }
    if(ang == 90)
    {
        cout << "El angulo se clasifica como recto" << endl;
    }
    if(ang > 90)
    {
        cout << "El angulo se clasifica como obtuso" << endl;
    }

    



    return 0;
}