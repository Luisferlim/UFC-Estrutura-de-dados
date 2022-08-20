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

    cout << "digite o tamanho do vetor L: ";
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
	cout << "[";
	for (int i = 0; i < m; i++)
	{
		cout << L[i] << ", ";
	}
	cout << "]\n";
}

int manipula_vetor( int* L, int m)
{
	int aux; //auxiliar para operações com elementos do vetor
	int pontaux = m/2; // esse aqui é um ponteiro' para manipular elementos no vetor aux
    int vetaux[m/2]; // isso eh um vetor aux para ordenar corretamente os elementos
    int contador = 0; // contador de elementos do vetor aux
	
	//loop para preencher o vetor aux
	int i = 0;
	while (i < m/2)
	{
		vetaux[i] = L[i];
		i++;
	}
	
	//loop para manipular o vetor 
	i = 1; //reatribuindo i para usarmos novamente no while
	while (i<m)
	{
		//logica da questao em si
		aux = L[i];
		L[i] = L[pontaux];
		L[i-1] = vetaux[contador];
		
		contador++;
		pontaux++;
		i +=2;
	}
		return *L; //aqui ele retorna o vetor manipulado
}
