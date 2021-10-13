#include <iostream>
using namespace std;
// Autor: Qianzi Tan
// Fecha: 9 de Septiembre 2021
// Descripción: Escribe un programa PorTres.cpp en el que se llame a la función PorTres() desde main().
//--------------------------------------------------------------------------------------
double porTres(double a)
{
    return (a * 3);
}

int main()
{
    double num;
    double res; //Se declara una variable llamada res

    cout << "Dígame un número";
    cin >> num;
    res = porTres(num);
    cout << "El resultado es: " << porTres(num) << "\n"; //Devuelve el resultado, llamándo a la función.
}
