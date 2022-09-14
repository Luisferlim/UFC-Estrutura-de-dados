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
    auto const sub1 = mid - left + 1;
    auto const sub2 = right - mid;
  
    auto *larray = new int[sub1],
         *rarray = new int[sub2];
  
    for (auto i = 0; i < sub1; i++)
        larray[i] = array[left + i];
    for (auto j = 0; j < sub2; j++)
        rarray[j] = array[mid + 1 + j];
  
    auto isub1
        = 0,
        isub2
        = 0; 
    int imerge
        = left; 

    while (isub1 < sub1
           && isub2 < sub2) {
        if (larray[isub1]
            <= rarray[isub2]) {
            array[imerge]
                = larray[isub1];
            isub1++;
        }
        else {
            array[imerge]
                = rarray[isub2];
            isub2++;
        }
        imerge++;
    }
    while (isub1 < sub1) {
        array[imerge]
            = larray[isub1];
        isub1++;
        imerge++;
    }
    while (isub2 < sub2) {
        array[imerge]
            = rarray[isub2];
        isub2++;
        imerge++;
    }
    delete[] larray;
    delete[] rarray;
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
