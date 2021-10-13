#include <iostream>
using namespace std;
// Autor: Qianzi Tan
// Fecha: 7 de octubre 2021
// La función esPositivo() recibe un número entero y devuelve verdadero si es mayor o igual que cero; o falso en caso contrario.
//--------------------------------------------------------------------------------------
int a;
int esPositivo()
{   
    if (a >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    
     cout << "Introduzca un numero" << endl;
    cin >> a;
    if (esPositivo() == true)
    {
        cout << "true";
    }
    else
    {
        cout << " falso";
    }
}
