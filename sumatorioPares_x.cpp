#include <iostream>
using namespace std;
int a;
int b;

int sumatorio()
{
    if(a % 2 == 0){
b = (a * (a + 2) / 4);
    }
    else
    {
        b = (a-1)*(a+1)/4;
    }
return b;
}

int main()
{
   
    cout << "Por favor, introduzca el numero n " << endl;
    cin >> a;
   int sum = sumatorio();
    cout << " la suma 0 + 2 + 4 + ... + n es" <<sum << endl;
   
}
