#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double raiz(double x, double x0, double e)
{
    // Verifica se atingiu a precisão desejada
    if (fabs(x0 * x0 - x) <= e)
    {
        return x0;
    }

    // Calcula uma nova aproximação
    return raiz(x, (x0 * x0 + x) / (2 * x0), e);
}

int main()
{
    double x, x0, e;

    cin >> x >> x0 >> e;

    // Calcula e mostra a raiz
    cout << fixed << setprecision(4) << raiz(x, x0, e) << endl;

    return 0;
}