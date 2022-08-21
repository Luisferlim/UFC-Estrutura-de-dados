#include <iostream>
#include <stdlib.h>

using namespace std;

int insere_vetor (int* L, int m);
int segundo_maior( int* L, int m);
//assinatura das funcoes que usaremos

int main()
{
    int m; //vai armazernar o tamanho do vetor L

    cout << "digite o tamanho do vetor L: ";
    cin >> m;
    int vetor[m]; //criação do vetor L, aqui chamado de vetor somente
    
    //chamando as funções
    insere_vetor(vetor, m);
	segundo_maior(vetor, m);
	
	//mostra o retorno da funcao segundo_maior
	cout << "\no segundo maior elemento eh: " << segundo_maior(vetor, m);

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

int segundo_maior( int* L, int m)
{
	int maior = L[0], segMaior;

	for (int i = 0; i<m; i++)
	{
		if (L[i] > maior)
		{
			segMaior = maior;
			maior = L[i];
		}
	}
	
	// printar os elementos com maior valor absoluto da diferenca entre eles
		return segMaior; //aqui ele retorna o valor do segundo maior
}
