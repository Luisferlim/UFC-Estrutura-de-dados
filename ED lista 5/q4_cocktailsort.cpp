#include <bits/stdc++.h>
using namespace std;
 
void CocktailSort(int vec[], int n)
{
 bool swapped = true;
 int begin = 0;
 int end = n - 1;
 
 while (swapped) {
  swapped = false;
 
  // loop da esquerda pra direit,bubble sort
  for (int i = begin; i < end; ++i) {
   if (vec[i] > vec[i + 1]) {
    swap(vec[i], vec[i + 1]);
    swapped = true;
   }
  }
 
  // se nada ocorrei no bubble, o vetor esta ordenado
  if (!swapped)
   break;
 
  // o swapped recebe falso para continuar a ordenacao
  swapped = false;
 
  //volta uma posicao do final
  --end;
 
  //da direita para a esquerda  
  for (int i = end - 1; i >= begin; --i) {
   if (vec[i] > vec[i + 1]) {
    swap(vec[i], vec[i + 1]);
    swapped = true;
   }
  }
 
  //avanca o ponto de comeco
  ++begin;
 }
}

//funcao para printar o vetor
void printvector(int vec[], int n)
{
 cout << "[";
 for (int i = 0; i < n; i++) {cout << vec[i] << ", ";}
 cout << "]";
}
 
int main ()
{
//binary_search
 int* vector, size;
 cin >> size;
 vector = new int(size);
 for (int i = 0; i < size; i++) {cin >> vector[i];}

 CocktailSort(vector, size);
 printf("Sorted vector: \n");
 printvector(vector, size);
 return 0;
}