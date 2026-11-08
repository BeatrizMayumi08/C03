#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> pilha; //ponteiro da fila
    int x; //var auxiliar
    int i; //contador
    
    for (i = 0; i < 4; i++)
    {
        cin >> x;
        pilha.push_back(x);
    }
     while (!pilha.empty()) //verifica se a lista esta vazia
     {
        x = *pilha.begin(); //olha o topo
        cout << x << " "; 
        //Desinverte a saida da lista
        pilha.pop_front();  // remove o topo
    }
    
    return 0; 
}