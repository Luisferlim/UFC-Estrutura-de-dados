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
	
void matriz_diagonal (int n, int m, float **M ){
// Zera as posi ç õ es da matriz M abaixo da diagonal principal

	int j = m;
	int i = j-1;
	//loop para percorrer a diagonal
	while (j >= 1){
			for(int o=i;o>=0;o--){
      	      M[o][j] = 0;
       	 }
		j--;
		i--;
		}		
		
	j = 0;
    i = j+1;
	//loop para percorrer a diagonal
	while (j < m){
			for(int o=i;o<m;o++){
      	      M[o][j] = 0;
       	 }
		j++;
		i++;
		}
		
		mostrar_matriz ( n, m, M );
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
    
 	matriz_diagonal (l, c, MAT);
}

