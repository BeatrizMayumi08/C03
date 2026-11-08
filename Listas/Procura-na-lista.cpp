#include <iostream>
#include <list>
using namespace std;

bool encontrar(list<int> lista, int x)
{
    //Ponteiro para a lista
    list<int>::iterator p;

    p = lista.begin(); //aponta para o inicio da lista 
    
    for (p = lista.begin(); p != lista.end(); p++)
    {
        //condiçao de presença na lista ou nao
        if (*p == x)
        {
            return true;
        }
    }    
        return false;
}

int main()
{
    int busca;
    int x; // variavel auxiliar 
    bool resposta = false;
    list<int> lista;

    do 
    {
        cin >> x;
        if (x != 0)
            lista.push_front(x);
    }
    while (x != 0);
    
    //buscar o valor dentro da lista
    cin >> busca;
    
    resposta = encontrar(lista, busca);
    
    if (resposta == true)
    {
        cout << "Encontrado" << endl;
    }
    else
    {
        cout << "Nao encontrado" << endl;
    }
    
    return 0;
}