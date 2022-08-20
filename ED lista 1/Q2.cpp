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
    cout << "aqui está o vetor propriamente manipulado: ";
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
	meio = m/2; //aqui definimos onde é o meio do vetor
	int i = 0;
	ant = 1; //isso aqui é um aux para numeros impares (anteriores)

	if (meio%2 == 0)
	 {
	   pos = meio; //para um vetor m/2 par
	 }
	else
	 {
	   pos = meio; //para um vetor impar (a sua divisao por 2 dará um numero inteiro extraido de um decimal arredontado para baixo)
	 }
	
	while(ant < meio && pos < m)
	{
	    
	    aux = L[ant];
	    L[ant] = L[pos];
	    L[pos] = aux;
	    ant +=2;
	    pos +=1;
	}
		return *L; //aqui ele retorna o vetor manipulado
}