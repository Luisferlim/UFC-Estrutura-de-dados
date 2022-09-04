#include <iostream>
#include <cstdlib>

using namespace std;


void zerar_coluna_abaixo (int j, int m, float **M){
// Zera as posi ç õ es da coluna j da matriz M abaixo da diagonal principal
	int i = j+1;
        for(int o=i;o<m;o++){
            M[o][j] = 0;
        }
        
}

int main(){
	cout << "digite a quantidade de linhas e colunas respectivamente: ";
    int l, c, pivo;
    cin >> l >> c; //quantidade de linhas e colunas da matriz em questão
    cin >> pivo; //elemento que servira de pivo para zerar a coluna abaixo dele
    float **MAT = new float *[ l ];
    for ( int i = 0; i < l ; i ++) {MAT [ i ] = new float [ c ];}
    
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            cout << "digite a o elemento a" << i+1 << j+1 << ": ";
            cin >> MAT[i][j];
        }
        
        zerar_coluna_abaixo ( pivo, l, MAT);
    }	
}
