#include <iostream>
using namespace std;
int i, n;
int esPrimo()
{
    int count;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)

            count++;
    }
    return count;
}

int main()
{
    cout << "Introduzca un numero:" << endl;
    cin >> n;
    int num = esPrimo();
    if (num == 2)
    {
        cout << n << "es primo numbre." << endl;
    }
    else
    {
        cout << n << "no es primo numbre." << endl;
    }
}
