// 33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cmath>

//Problema 33 Capitulo 8.
//Una bola se arroja en el aire a una velocidad inicial V, formando un angulo A con la horizontal,
//a partir de una altura D sobre el piso. Trazar la trayectora de la bola, usando intervalos de n segundos
//hasta que toque el piso

//User      Hector Lucero-19211673
//Date      25/03/2022
using namespace std;

class Distance
{
public:

    double Horizontal(double Vo, double Ang, double t)
    {
        double X;
        for (int i = 1; i <= t + 1; i++)
        {
            X = Vo * (cos(Ang)) * i;
            cout << "La distancia horizontal a los " << t << " segundos es: " << X << endl;

            return X;
        }
    }

    double Vertical(double Vo, double h, double g, double t, double Ang)
    {
        double Y;
        for (int i = 1; i <= t + 1; i++)
        {
            Y = h + (Vo * (sin(Ang) * i)) - ((g * (pow(t, 2))) / 2);
            cout << "La distancia vertical a los " << t << " segundos es: " << Y << endl;

            return Y;
        }
    }
};

int main()
{
    double Dx, Dy, ang, h, g, Vo, t;

    g = -9.8;

    cout << "Inserte la velocidad inicial del objeto: " << endl;
    cin >> Vo;

    cout << "Inserte la altura inicial: " << endl;
    cin >> h;

    cout << "Inserte el angulo con respecto a la horizontal: " << endl;
    cin >> ang;

    cout << "Inserte el intervalo en segundos: " << endl;
    cin >> t;

    Distance d;

        cout << "----HORIZONTAL----" << endl;
        d.Horizontal(Vo, ang, t);

        cout << "----VERTICAL---" << endl;
        d.Vertical(Vo, h, g, t, ang);

    return 0;





}
