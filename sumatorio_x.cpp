#include <iostream>
using namespace std;
int sumatorio(int a)
{
    int sum;
    for (int i = 1; i <= a; ++i)
        sum += i;
    return sum;
}

int main()
{
    int a;
    cout << "Por favor, introduzca el numero n " << endl;
    cin >> a;
    cout << " la suma 1 + 2 + 3 + ... + n es" << sumatorio(a) << endl;
}
