#include <iostream>
#include <cstdlib>

using namespace std;


void zerar_posicao_abaixo (int i, int j, float **M){
// Zera a posi ç ã o M [ i ][ j ] da matriz M , onde i > //i = j+1
 	float aux = M[i][j];
        for(int o=0;o<m;o++){
            M[i][o] = M[i][o] - ((aux*M[j][o])/M[j][j]);
        }
        
}

int main(){
	cout << "digite a quantidade de linhas e colunas respectivamente: ";
    int l, c;
    cin >> l >> c; //quantidade de linhas e colunas da matriz em questão
    
    float **MAT = new float *[ l ];
    for ( int i = 0; i < l ; i ++) {MAT [ i ] = new float [ c ];}
    
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            cout << "digite a o elemento a" << i+1 << j+1 << ": ";
            cin >> MAT[i][j];
        }
    }
 	
 	zerar_posicao_abaixo (l, c, MAT);
}


