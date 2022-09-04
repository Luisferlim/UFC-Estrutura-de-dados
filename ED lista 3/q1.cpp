#include <iostream>
#include <cstdlib>

using namespace std;

void trocar_linhas ( int n, int m, float ** M){
// Troca as linhas i e j da matriz M de dimens õ es n × m
    int aux;
    int i, j;
    
    cout << "insira as linhas que voce deseja trocar: ";
    cin >> i >> j; 
    
    for (int col = 0; col < m; col++){
        aux = M[i-1][col];
        M[i-1][col] = M[j-1][col];
        M[j-1][col] = aux;
    }
    
      for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << M[i][j] << ", ";
        }
        cout << "\n";
    }
    
}

void multiplicar_escalar_linha (int a, int i, int j, float ** M){
// Multiplica a linha i da matriz M de dimens õ es n × m
  for(int l=0;l<j;l++){
            M[i][l] = a*M[i][l];
        }
}

void somar_linhas (int a, int i, int j, float ** M){
// Soma à linha i o produto da linha j por a
// na matriz M de dimens õ es n × m
     for(int l=0;l<j;l++){
        M[i][l] = M[i][l]+a*M[j][l];
    }
}

int main()
{
    cout << "digite a quantidade de linhas e colunas respectivamente: ";
    int l, c, a;
    cin >> l >> c; //quantidade de linhas e colunas da matriz em questão
    
    float **MAT = new float *[ l ];
    for ( int i = 0; i < l ; i ++) {MAT [ i ] = new float [ c ];}
    
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            cout << "digite a o elemento a" << i+1 << j+1 << ": ";
            cin >> MAT[i][j];
        }
    }
    
    
}

