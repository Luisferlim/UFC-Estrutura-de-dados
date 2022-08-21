#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int insere_vetor (int* L, int m);
int elementos_mais_distantes( int* L, int m);
//assinatura das funcoes que usaremos

int main()
{
    int m; //vai armazernar o tamanho do vetor L

    cout << "digite o tamanho do vetor L: ";
    cin >> m;
    int vetor[m]; //criação do vetor L, aqui chamado de vetor somente
    
    //chamando as funções
    insere_vetor(vetor, m);
    elementos_mais_distantes(vetor, m);
	
	
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

int elementos_mais_distantes( int* L, int m)
{
	//criar uma variavel que recebe o valor aboluto entre as duas
	int absolute;
	//criar duas variaveis para receber os elementos
	int ele1, ele2;
	int maior = 0;

	for (int i = 0; i<m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			//pega o valor absoluto entre as duas posições
			absolute = abs(L[i] - L[j]);
			//comparar os valores absolutos e atribuir numa varivel que guarda o maior valor absoluto
			if (absolute > maior)
			{
				ele1 = L[i];
				ele2 = L[j];
				maior = absolute;
			}
		}
	}
	
	// printar os elementos com maior valor absoluto da diferenca entre eles
	cout << "\nos elementos mais afastados sao: " << ele1 << " e " << ele2; 
}
