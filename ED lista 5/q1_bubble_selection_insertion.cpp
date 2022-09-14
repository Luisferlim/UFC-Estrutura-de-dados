
#include <stdlib.h>
#include <iostream>

using namespace std;

int bolha (int size , int* L){ //complexidade (N2 -n)/2
    int i = 0, k = size-1, aux;
    while (i < size-1)
    {
        int j = 0;
        while (j < k)
        {
            if (L[j] > L[j+1])
            {
               swap(L[j], L[j+1]);
            }
            j++;
        }
        k--;
        i++;
    }
    return *L;
}   
int insercao ( int size , int* L){ 
    int i = 0, j, aux;

    while(i < size-1)// esse aqui avanca o vetor pra direita
    {   
        j = i + 1;
        while(j>0)
        {
            if (L[j] < L[j-1])
            {
                swap(L[j], L[j-1]);
            }
            else 
            {
                break;
            }
            j--;//a posição avanca pra esquerda
        }
        i++;
    }
    return *L;
}

int selecao (int size , int* L){//procura o minimo e troca com a posição relativa
    int min_index = 0, i = 0, j = 0, aux;

    while(j < size-1)
    {
        min_index = j;//auxiliar para o indice da menor posicao
        i = j;
        while (i < size)// loop para achar o minimo
        {
            if (L[i] < L[min_index])
            {
                min_index = i;
            }
            i++;
        }
        if (L[j] > L[min_index])
        {
           swap(L[j], L[min_index]);
        }
        j++;
    }   


    return *L;
}

int main (){

    int* vector, size, num;
    cin >> size;
    vector = new int(size);
    for (int i = 0; i < size; i++) {cin >> vector[i];}
}
