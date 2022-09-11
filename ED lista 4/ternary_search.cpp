#include <iostream>
#include <stdlib.h>

using namespace std;

int ternary_search(int size, int *arr, int num);

int main(){
    int *vector, size, a;
    cout << "digite o tamanho do vetor: ";
    cin >> size;
    vector = new int(size); // alocacao dinamica
    cout << "digite os elementos do vetor: ";
    for(int i =0; i < size; i++) {cin >> vector[i];}//for de uma linha para preencher o vetor                                   
    
    cout << "digite o elemento a ser buscado: ";
    cin >> a;

    int pos = ternary_search(size, vector, a);

    if(pos != -1) cout << "O numero " << a << " eh elemento " << pos << " do vetor";
    else cout << "numero nao encontrado como elemento do vetor";
}

int ternary_search(int size, int *arr, int num){
    int begin = 0;
    int end = size-1;

    while(begin<=end){
      int right_third = begin + (end - begin )/3;
      int left_third = end - (end - begin )/3;
      if (num == arr[right_third]) return right_third;
      if (num == arr[left_third]) return left_third;
      if (num < arr[right_third]){
        end = right_third - 1;
        continue;
      }
      if (num > arr[left_third]){
        begin = left_third + 1;
        continue;
      }
      begin = right_third + 1;
      end = left_third - 1;
    }
    return -1;
}