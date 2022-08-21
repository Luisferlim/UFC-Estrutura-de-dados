#include <iostream>
#include <stdlib.h>

using namespace std;

int insere_vetor (int* L, int m);
int ele_repetido( int* L, int m);
//assinatura das funcoes que usaremos

int main()
{
    int m; //vai armazernar o tamanho do vetor L

    cout << "digite o tamanho do vetor L: ";
    cin >> m;
    int vetor[m]; //criação do vetor L, aqui chamado de vetor somente
    
    //chamando as funções
    insere_vetor(vetor, m);
	ele_repetido(vetor, m);

	cout << "o elemento repetido eh: " << ele_repetido(vetor, m);
	return 0;
}

int insere_vetor (int* L, int m)
{
    for (int i = 0; i<m; i++)
    {
        cout << "insira o " << i+1 << "o elemento: ";
        cin >> L[i];
    }
    
    return *L; //aqui ele retorna o vetor inserido
}

int ele_repetido(int* L, int m)
{
	//variavel que ira receber o elemento repetido
	int rep;
	
	//loop para percorrer os elementos do vetor
	for(int i = 0; i<m; i++)
	{
		//loop para verificar se ha um elemento igual a ele daqui pra frente
		for (int j = i; j<m; j++)
		{
			if (L[i] == L[j])
			{
				rep = L[j];
			}
		}
	}
	
	return rep;
}
