
#include <stdlib.h>
#include <iostream>

using namespace std;

 
int insercao_impares ( int size , int* L){ 
    int i = 1, j;

    while(i < size/2)// esse aqui avanca o vetor pra direita
    {   
        if (i == 1)
        {
            j=i+2;
        }
        else
        {
            j = i;
        }

        if(i%2 )
        while(j>1) //j sempre impar
        {
            if (L[j] < L[j-2])
            {
              swap(L[j], L[j-2]);
            }
            else 
            {
                break;
            }
            j-=2;//a posição avanca pra esquerda
        }
        i+=2;
    }
    return *L;
}

int selecao_pares (int size , int* L){//procura o minimo e troca com a posição relativa
    int min_index, i, j = 0;

    while(j < size/2)
    {
        min_index = j;//auxiliar para o indice da menor posicao
        i = j;
        while (i < size)// loop para achar o minimo
        {
            if (L[i] < L[min_index])
            {
                min_index = i;
            }
            i+=2;
        }
        if (L[j] > L[min_index])
        {
           swap(L[j], L[min_index]);
        }
        j+=2;
    }   

    return *L;
}

int main (){

    int* vector, size;
    cin >> size;
    vector = new int(size);
    for (int i = 0; i < size; i++) {cin >> vector[i];}
}