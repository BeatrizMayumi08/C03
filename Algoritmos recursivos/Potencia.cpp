#include <iostream>
using namespace std;

int potencia(int p, int s)
{
    // Caso recursivo
    if (s > 0)
    {
        return p * potencia(p, s - 1);
    }
    else
    {
        // Caso base
        return 1;
    }
}

int main()
{
    int a;
    int n;

    cin >> a >> n;

    // Calcula a potência
    int resultado = potencia(a, n);

    cout << resultado << endl;

    return 0;
}