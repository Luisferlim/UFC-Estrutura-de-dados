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
    int vetor[m]; //cria��o do vetor L, aqui chamado de vetor somente
    
    //chamando as fun��es
    insere_vetor(vetor, m);
	manipula_vetor(vetor, m);
	mostra_vetor(vetor, m);
	
	return 0;
}

int insere_vetor (int* L, int m)
{
    for (int i = 0; i<m; i++)
    {
        cout << "insira o " << i+1 << "� elemento: ";
        cin >> L[i];
    }
    return *L; //aqui ele retorna o vetor inserido
}

void mostra_vetor(int* L, int m)
{
    cout << "aqui est� o vetor propriamente manipulado: ";
	cout << "[";
	for (int i = 0; i < m; i++)
	{
		cout << L[i] << ", ";
	}
	cout << "]\n";
}

int manipula_vetor( int* L, int m)
{
	int i = 0, aux;
	while (i < m/2)
	{
		aux = L[i];
		L[i] = L[m- i -1];
		L[m- i -1] = aux;
		i++;
	}
		return *L; //aqui ele retorna o vetor manipulado
}
