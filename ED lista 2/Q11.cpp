#include <iostream>
#include <stdlib.h>

using namespace std;

int insere_vetor (int* L, int m);
int  menor_L (int* L, int m);
int maior_V (int* V, int m);
void troca( int* L, int *V, int m);
//assinatura das funcoes que usaremos

int main()
{
    int m; //vai armazernar o tamanho do vetor L
	
    cout << "digite o tamanho do vetor L e V: ";
    cin >> m;
    
    int vetor1[m]; //criação do vetor L, aqui chamado de vetor1 somente
    int vetor2[m]; //criação do vetor V, aqui chamado de vetor2 somente
    //esse codigo eh da biblioteca stdlib.h e so funciona no windows, serve para limpar a tela do compilador apenas
	system("cls");
	
    //inserindo os elementos dos vetores
    cout << "Vetor L: \n";
    insere_vetor(vetor1, m);
    
    system("cls");
    
    cout << "Vetor V:\n";
    insere_vetor(vetor2, m);
    
    //funcao que realiza a logica em si
    troca(vetor1, vetor2, m);
   
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

void troca(int* L,int* V, int m)
{	

	int idcma, idcme; //guarda 
	int aux;
	bool condicao = false ; //essa eh a condicao de parada
	int i=0, j=0;
	
	while(!condicao)
	{
		int menor = L[0]; //referencias para o menor e maior valor
		int maior = V[0];
		//acha o menor valor de L
		while (i<m)
		{
			if (L[i] < menor)
			{
				menor = L[i];
				idcme = i;	
			} 
			i++;
		}
		//acha o maior valor de V
		while (j<m)
		{	
			if (V[j] > maior)
			{
				maior = V[j];
				idcma = j;
			}
			j++;
		}
		
		if (menor < maior)
		{
			aux = L[idcme];
			L[idcme] = V[idcma];
			V[idcma] = aux;
		}
		else
		{
			condicao = true; // a condicao para parada foi satisfeita
		}
		i=0;
		j=0;//auxiliares para percorrer o vetor
	}	
}
