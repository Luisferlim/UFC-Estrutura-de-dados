#include <iostream>
#include <cstdlib>

using namespace std;

void mostrar_matriz (int n, int m, float **M ){
	
	for (int i = 0; i<n;i++){
		for (int j = 0; j<m; j++){
			cout << M[i][j] << ", ";
		}
		cout << "\n";
	}	
}

void zerar_coluna_acima (int n, int j, int m, float **M){
// Zera as posi ç õ es da coluna j da matriz M abaixo da diagonal principal
	int i = j-1;
        for(int o=i;o>=0;o--){
            M[o][j] = 0;
        }
        mostrar_matriz (n, m, M );
}

int main(){
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
 	
 	cin >> a;
 	zerar_coluna_acima (l,a,c,MAT);
 	

}

