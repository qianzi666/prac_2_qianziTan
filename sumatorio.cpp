#include <iostream>
using namespace std;
int sumatorio(int a)
{
    int b;
    b = (a * (a + 1) / 2);
    return b;
}

int main()
{
    int num;
    cout << "Por favor, introduzca el numero n " << endl;
    cin >> num;
    cout << " la suma 1 + 2 + 3 + ... + n es" << sumatorio(num) << endl;
}
