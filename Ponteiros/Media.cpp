#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    int i = 0; 
    double media;
    double soma = 0;
    cin >> n;
    
    // Alocação dinamica do vetor
    int *vetor = new int [n];
    int *p = vetor;
    
    // inserção dentro do vetor dos elementos
    while (i != n)
    {
        cin >> *p;
        p++;
        i++;
    }
    
    // volta para o endereco do primeiro elemento
    p = &vetor[0];
    
    cout << fixed << setprecision(2);
    for (int j = 0; j <= n; j++)
    {
        if ( j < n )
        {
            soma = soma + *p;
            p++;
        }
        // permite que calcule a media do vetor e mostre ainda dentro do for
        else 
        {
            media = soma/n;
            cout << media << endl;
        }
        
    }
     //Libera a memoria
    delete[] vetor;
    
    return 0;
}