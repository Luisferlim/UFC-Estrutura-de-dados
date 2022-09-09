#include <iostream>
#include <stdlib.h>

using namespace std;

int busca_binaria(int *vect, int size, int item)
{
    int begin = 0;
    int end = size; //respectivamento o comeco e o final da busca
    int i;
    
    while (begin < end) //condicao de parada da busca
    {
        i = (begin + end)/2;

        if (vect[i] == item) //achou!
        {
            return i;
        }

        if(vect[i] < item) //se o elemento vect[i] eh menor do que o que estamos buscando
        {
            begin = i+1; //item, se existir, estara a direita de i
        }
        else
            if(vect[i] > item)
        {
            end = i; //item, se existir, estara a esquerda de i
        }
    }
    return -1;
}

int main()
{
    int *vector, size, item;

    cout << "digite o tamanho do vetor: ";
    cin >> size;
    vector = new int(size); // alocacao dinamica
    cout << "digite os elementos do vetor: ";
    for(int i =0; i < size; i++) {cin >> vector[i];}//for de uma linha para preencher o vetor

    cout << "digite o elemento a ser procurado: ";
    cin >> item;

    cout << busca_binaria(vector, size, item);//mostra o retorno da binary_search
    return 0;
}