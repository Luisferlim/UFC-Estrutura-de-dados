#include <iostream>
#include <stdlib.h>

using namespace std;

int insere_vetor (int* L, int m, int n);
void mostra_vetor(int* L, int m);
int manipula_vetor( int* L, int m, int n);
//assinatura das funcoes que usaremos

int main()
{
    int m; //vai armazernar o tamanho do vetor L
    int n; // armazena a quyantidade de elementos preenchidos
    cout << "digite o tamanho do vetor L: ";
    cin >> m;
    cout << "digite o numero n de elementos que contem no vetor: ";
    cin >> n;
    
    int vetor[m]; //criação do vetor L, aqui chamado de vetor somente
   
    //chamando as funções
    insere_vetor(vetor, m, n);
    manipula_vetor(vetor, m, n);
    mostra_vetor(vetor, m);
	
	return 0;
}

int insere_vetor (int* L, int m, int n)
{
    //adicionando os n elementos do vetor
    for (int i = 0; i<n; i++)
    {
        cout << "insira o " << i+1 << "° elemento: ";
        cin >> L[i];
    }
    //preenchendo o restante das posições com 0's
    for (int j = n; j < m; j++) 
    {
    	L[j] = 0;
	}
    return *L; //aqui ele retorna o vetor inserido
}

void mostra_vetor(int* L, int m)
{
    cout << "aqui esta o vetor propriamente manipulado: ";
	cout << "[";
	for (int i = 0; i < m; i++)
	{
		cout << L[i] << ", ";
	}
	cout << "]\n";
}

int manipula_vetor( int* L, int m, int n)
{
	int i = n-1, aux, final = L[n-1]; //ele guarda o ultimo elemento
	while (i >= 0) //o loop vai do final ao comeco 'avancando' os elementos
	{
		if (i != 0) //aqui ele verfica se nao eh o primeiro elemento
		{
			L[i] = L[i-1];
		} 
		else if (i == 0) //caso seja, ele troca com ultimo pela variavel que ja usamos antes do loop
		{
			L[i] = final;
		}
		i--;
	}
		return *L; //aqui ele retorna o vetor manipulado
}
