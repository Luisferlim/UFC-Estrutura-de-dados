#include <iostream>
#include <stdlib.h>

using namespace std;

int insere_vetor (int* L, int m);
void topos_seq( int* L, int m);
//assinatura das funcoes que usaremos

int main()
{
    int m; //vai armazernar o tamanho do vetor L

    cout << "digite o tamanho do vetor L: ";
    cin >> m;
    int vetor[m]; //criação do vetor L, aqui chamado de vetor somente
    
    //chamando as funções
    insere_vetor(vetor, m);
	topos_seq(vetor, m);

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

void topos_seq(int* L, int m)
{
	//o tam do vetor aux eh metade de m, pois eh o numero maximo de topos num vetor
	int topos[m/2]; //esse vetor armazena os indices dos topos
	//essa variavel guarda a qtd de topos que temos
	int qtd_topos = 0;
	
	//percorrer o vetor procurando os topos e armazenando num vetor aux
	int i=1; 
	while (i<m-1) //o primeiro e ultimo elemento do vetor nao podem ser topos
	{
		if (L[i] > L[i-1] && L[i] > L[i+1])
		{
			topos[qtd_topos] = i; //indices
			qtd_topos++;
		}
		
		i++;
	}
	//esse eh o vetor que armazenara a maior seq crescente de topos partindo do primeiro
	int vet_maiorseq [qtd_topos];
	int cont = 1; //contador para sabermos quantos elementos tem a maior seq
	int aux; //essa variavel nos auxiliara na manipulacao da seq
	//esse aqui eh o primeiro topo
	int first_top = L[topos[0]];
	vet_maiorseq[0] = first_top;
	
	//fazer um loop para preencher com a seq crescente de topos
	//vai do primeiro topo a qtd_topos
	for (int j = 0; j<qtd_topos; j++)
	{
		//verificar se eh maior que o primeiro top
		if (L[topos[j]] > first_top)
		{
			//verifica se ele eh maior que o elemento antecessor
			if (L[topos[j]] > vet_maiorseq[cont -1])
			{
				//armazena no vetor maior seq porque ja esta em ordem
				vet_maiorseq[cont] = L[topos[j]];
				cont++;
			}
			else
			{
				//temos de procurar onde o L[topos[j]] se encaixa e trocar as posições
				for (int k = 0;k<cont;k++)
				{
					//se for menor
					if (L[topos[j]] < vet_maiorseq[k])
					{
						aux = vet_maiorseq[k];
						vet_maiorseq[k] = L[topos[j]];
						vet_maiorseq[cont] = aux;
						cont++;
						break;
					}
				}
			}
		}
	}
	
	if (qtd_topos == 0)
	{
		cout << "o vetor nao tem topos";
	}
	else 
	{
		cout << "a maior seq de topos eh: ";
		for (int j=0; j<cont; j++)
		{
			cout << vet_maiorseq[j] << ", ";
		}
	}
}
