#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    //Alocacao dinamica def tam do vetor
    int *vetor = new int[n];
    int *p = vetor;
    
    for (int i = 0; i < n; i ++)
    {
        cin >> *p;
        p++; //Pula p/prox posicao 
    }
    
    //coloca o ponteiro no inicio
    p = vetor;
    
    //
    for (int i = 0; i < n; i ++)
    {
        cout << *p << " ";
        p++;
    }
    
    //Libera a memoria
    delete[] vetor;

    return 0;
}

