#include <iostream>
#include <stdlib.h>

using namespace std;

int busca_binaria(int *vect, int size, int item)
{
    int begin = 0;
    int end = size - 1; //respectivamento o comeco e o final da busca

    while (begin <= end) //condicao de parada da busca
    {
        int i = (begin + end)/2;

        if (vect[i] == item) //achou!
        {
            return i;
        }

        if(vect[i] < item) //se o elemento vect[i] eh menor do que o que estamos buscando
        {
            begin = i+1; //item, se existir, estara a direita de i
        }
        else
        {
            end = i; //item, se existir, estara a esquerda de i
        }
    }
    return -1;
}

int main()
{
    int *vector, size;  
    cin >> size;
    vector = new int(size); // alocacao dinamica
    
    for(int i =0; i < size; i++) {cout << vector[i] << ", ";}
    return 0;
}