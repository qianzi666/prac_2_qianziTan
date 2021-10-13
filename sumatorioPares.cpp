#include <iostream>
using namespace std;
int a,b,sum;
int sumatorioPares(){
for (b = 0; b <= a; b = b + 2)
    {
        sum = sum + b;
    }
    return sum;
}

int main()
{
    cout << "Por favor, introduzca el numero n " << endl;
    cin >> a;
    int x = sumatorioPares();
    cout << " la suma 0 + 2 + 4 + ... + n es" << x << endl;
   
}
