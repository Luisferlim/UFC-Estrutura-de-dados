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
	cout << "[";
	for (int i = 0; i < m; i++)
	{
		cout << L[i] << ", ";
	}
	cout << "]\n";
}

int manipula_vetor( int* L, int m)
{
	int meio,ant ,pos ,aux;
	meio = m/2; //aqui definimos onde eh o meio do vetor
	int i = 0;
	ant = 1; //isso aqui eh um aux para numeros impares (anteriores)

	if (meio%2 == 0)
	 {
	   pos = meio; //para um vetor m/2 impar
	 }
	else
	 {
	   pos = meio +1; //para um vetor par (a sua divisao por 2 dará um numero inteiro extraido de um decimal arredontado para baixo)
	 }
	
	//while para manipular o vetor, ele faz a troca de um elemento ant por um pos indo de 2 em 2
	while(ant < meio && pos < m)
	{
	    
	    aux = L[ant];
	    L[ant] = L[pos];
	    L[pos] = aux;
	    ant +=2;
	    pos +=2;
	}
		return *L; //aqui ele retorna o vetor manipulado
}
