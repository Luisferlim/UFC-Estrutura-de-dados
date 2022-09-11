#include <iostream>
#include <stdlib.h>

using namespace std;
int split(int* L, int n);

int main()
{
    int *vector, size;

    cout << "digite o tamanho do vetor: ";
    cin >> size;
    vector = new int(size); // alocacao dinamica
    cout << "digite os elementos do vetor: ";
    for(int i =0; i < size; i++) {cin >> vector[i];}//for de uma linha para preencher o vetor
    
    split(vector, size);

    cout << "[";
    for(int i =0; i < size; i++) {cout << vector[i] << ", ";}
    cout << "]";

    return 0;
}

int split(int* L, int n)
{
    int i = 0, j, aux;
    int ele_mid = L[(n-1)/2]; //elemento do meio 
    int cont_minors = 0; //quantos elementos sao menores que o ele_meio

    while (i < n)//loop para ordenar o o meio, acha os menores e conta
    {
        if (L[i] < ele_mid)
        {
            cont_minors++;
        }
        i++;
    } 

    //colocamos o elemento do meio no seu respectivo lugar
    aux = L[(n-1)/2];
    L[(n-1)/2] = L[cont_minors];
    L[cont_minors] = aux;

    i=0;
    while (i < cont_minors) //ordenar o vetor novo
    {
        if(L[i] < ele_mid) //se o elemento da esquerda eh menor que o do meio
        {
            i++;
        }
        if(L[i] > ele_mid) // senão
        {
            j=i;
            while(j < n) //loop para trocar um elemento errado da esquerda por um errado da direita 
            {
                if (L[j] < ele_mid)
                {
                    aux = L[i];
                    L[i] = L[j];
                    L[j] = aux;
                }
                j++;
            }
            i++;
        }
    }
    return *L;
}
