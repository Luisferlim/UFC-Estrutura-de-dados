#include <iostream>
#include <stdlib.h>

using namespace std;

int insere_vetor (int* L, int m);
void mostra_vetor(int* L, int m);
int manipula_vetor( int* L, int m);
//assinatura das funcoes que usaremos

int main()
{
    int m; //vai armazernar o tamanho do vetor L
    cout << "digite a quantidade de numeros do vetor L: ";
    cin >> m;
    int vetor[m]; //criação do vetor L, aqui chamado de vetor somente
    
    //chamando as funções
    insere_vetor(vetor, m);
    manipula_vetor(vetor, m);
    mostra_vetor(vetor, m);
	
	return 0;
}

int insere_vetor (int* L, int m)
{
    for (int i = 0; i<m; i++)
    {
        cout << "insira o " << i+1 << "° elemento: ";
        cin >> L[i];
    }
    return *L; //aqui ele retorna o vetor inserido
}

void mostra_vetor(int* L, int m)
{
    cout << "aqui esta o vetor propriamente manipulado: ";
	cout << "["; // isso aqui serve so para embelezar a saida
	for (int i = 0; i < m; i++)
	{
		cout << L[i] << ", ";
	}
	cout << "]\n";
}

int manipula_vetor( int* L, int m)
{
	int aux; //para manipular cada elemento
	int i = 0; //para inicializar o while
	while(i<m)
	{
		if (i%2 == 0) // se for par
		{
			if(L[i]%2 == 0)
			{
				i++; //continua o loop
			}
			else //aqui ele procura um par para trocar com o elemento impar que ele achou
			{
				for (int j = i; j<m; j++)
				{
					if (L[j]%2 == 0)
					{
						aux = L[j];
						L[j] = L[i];
						L[i] = aux;
						break;
					}
				}
			}
		}
		
		if (i%2 != 0) // se for impar
		{
			if(L[i]%2 != 0)
			{
				i++; //continua o loop
			}
			else //aqui ele procura um impar para trocar com o elemento par que ele achou
			{
				for (int j = i; j<m; j++)
				{
					if (L[j]%2 != 0)
					{
						aux = L[j];
						L[j] = L[i];
						L[i] = aux;
						break;
					}
				}
			}
		}	
	}
		return *L; //aqui ele retorna o vetor manipulado
}



