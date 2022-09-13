#include <stdlib.h>
#include <iostream>

using namespace std;

int bolha1 (int size , int* L){ //vai ate a metade do vetor
    int i = 0, k = (size/2)-1;
    while (i < size/2)
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

int bolha2 (int size , int* L){ //vai da metade ate o final do vetor
    int i = 0, k = size-1;
    while (i < size/2)
    {
        int j = (size/2);
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

void merge(int array[], int const left, int const mid,
           int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
  
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
  
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
  
    auto indexOfSubArrayOne
        = 0,
        indexOfSubArrayTwo
        = 0; 
    int indexOfMergedArray
        = left; 

    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}
 
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
  
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}


int main (){

    int* vector;
    int* vector_aux;
    int size;
    cout << "digite o tamanho do vetor: ";
    cin >> size;
    vector = new int(size);
    vector_aux = new int(size);
    for (int i = 0; i < size; i++) {cin >> vector[i];}
    
    auto arr_size = sizeof(vector) / sizeof(vector[0]);
    
    bolha1(size, vector);
    bolha2(size, vector);
    
    mergeSort(vector, 0, arr_size - 1);
    
    
    for (int i = 0; i < size; i++) {vector_aux[i] = vector[i];}
    
}