#include <iostream>
#include <stdlib.h>

using namespace std;
int inversion(int* L, int n);

int main()
{
    int *vector, size;

    cout << "digite o tamanho do vetor: ";
    cin >> size;
    vector = new int(size); // alocacao dinamica
    cout << "digite os elementos do vetor: ";
    for(int i =0; i < size; i++) {cin >> vector[i];}//for de uma linha para preencher o vetor
    
    return 0;
}

int inversion(int* L, int n)
{
    int cont = 0, i = 0, j;

    while (i < n)
    {
        j = i;
        while (j < n)
        {
            if (L[i] > L[j] && i < j)
            {
                cont++;
            }
            j++;
        }
        i++;
    }

    return cont;
}
