#include <iostream>
#include <stdlib.h>

using namespace std;

int insere_vetor (int* L, int m);
bool soma( int* L, int m, int k);
//assinatura das funcoes que usaremos

int main()
{
    int m; //vai armazernar o tamanho do vetor L
	int valor; //vai armazenar o valor k
	
    cout << "digite o tamanho do vetor L: ";
    cin >> m;
    int vetor[m]; //criação do vetor L, aqui chamado de vetor somente
    
    cout << "digite o valor de k: ";
    cin >> valor;
    
    //chamando as funções
    insere_vetor(vetor, m);
    
    //aqui nos compararemos se o retorno de soma() eh verdadeiro ou falso, para definirmos a saida
    if(soma(vetor, m, valor) == true)
	{
		cout << "existem dois valores em L que somados dao K";	
	} 
	else
	{
		cout << "nao existem dois valores em L que somados dao K";
	}
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

bool soma(int* L, int m, int k)
{	
	//auxiliar para a soma
	int soma;
	//auxiliar para retornar se existe ou nao 2 elementos que somados dao K
	bool verifica = false; 
	
	for (int i = 0; i<m; i++)
	{
		for (int j = i+1; j<m; j++)
		{
			soma = L[i] + L[j];
			//verifica se a soma dos elementos eh igual a k
			if (soma == k)
			{
				verifica = true;
				return verifica;
			}
		}
	}
	//retorna o valor bool
	return verifica;
}
