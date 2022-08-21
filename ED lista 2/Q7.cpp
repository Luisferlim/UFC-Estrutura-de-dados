#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int insere_vetor (int* L, int m);
void topos( int* L, int m);
//assinatura das funcoes que usaremos

int main()
{
    int m; //vai armazernar o tamanho do vetor L

    cout << "digite o tamanho do vetor L: ";
    cin >> m;
    int vetor[m]; //criação do vetor L, aqui chamado de vetor somente
    
    //chamando as funções
    insere_vetor(vetor, m);
	topos(vetor, m);

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

void topos(int* L, int m)
{
	//o tam do vetor aux eh metade de m, pois eh o numero maximo de topos num vetor
	int vetaux [m/2]; //esse vetor armazena os indices dos topos
	//essa variavel guarda a qtd de topos que temos
	int qtd_topos = 0;
	//percorrer o vetor procurando os topos e armazenando num vetor aux
	int i=1; 
	while (i<m-1) //o primeiro e ultimo elemento do vetor nao podem ser topos
	{
		if (L[i] > L[i-1] && L[i] > L[i+1])
		{
			vetaux[qtd_topos] = i;
			qtd_topos++;
		}
		
		i++;
	}
	//aqui vamos printar os topo, se o vetor tiver
	if (qtd_topos == 0)
	{
		cout << "o vetor nao tem topos";
	}
	else 
	{
		cout << "aqui estao todos os topos: "; 
		int j = 0;
		while(j<qtd_topos)
		{
			cout << L[vetaux[j]] << ", "; 
			j++;
		}
	}
}
