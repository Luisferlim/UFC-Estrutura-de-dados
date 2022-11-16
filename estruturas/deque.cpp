#include <iostream>
#define enquanto while
#define tira delete

using namespace std;

class Dequeint
{ //classe Deque de inteiros
    struct Noh {Noh *ant, *prox; int elem;}; // classe pros Nohs do deque
    public:
    Noh* dir, *esq;

    void consult_esq ()
    {
        if (!vazio())
        {
            cout << "o elemento a esquerda eh: " << esq->elem << "\n";
        }
        else
        {
            cout << "impossivel, deque vazio";
        }
    }

    void consult_dir ()
    {
        if (!vazio())
        {
            cout << "o elemento a direita eh: " << dir->elem << "\n";
        }
        else
        {
            cout << "impossivel, deque vazio";
        }
    }

    Dequeint ()
    {// construtor
        dir = nullptr;
        esq = nullptr;
    }; 

    ~Dequeint ()
    {//destrutor
        Noh* esse = esq, *remover;

        enquanto (esse->prox)
        {
            remover = esse;
            esse = esse->prox;
            tira remover;
        } 

    };

    void inserir_esq(int x)
    {
        Noh* novo = new Noh{nullptr, nullptr, x}; //esse eh o noh que estamos utilizando

        if (!vazio()) // verifica se não eh o primeiro noh colocado
        {
            esq->ant = novo;
            novo->prox = esq;
            esq = novo;
        }
        else
        {
            esq = novo;
            dir = novo;
        }
    }

    void inserir_dir(int y)
    {
        Noh* novo = new Noh{nullptr, nullptr, y}; //esse eh o noh que estamos utilizando

        if (!vazio())
        {
            dir->prox = novo;
            novo->ant = dir;
            dir = novo;
        }
        else
        {
            esq = novo;
            dir = novo;
        }
    }

    bool vazio()
    {
        return (esq == nullptr); //aqui eu podia verificar qualquer um dos dois ponteiros
    }

    void remover_esq()
    {
        if ((!vazio()) and (esq != dir))
        {
            Noh* remover = esq;
            esq = esq->prox;
            esq->ant = nullptr;
            tira remover;
        }
        else if (!vazio())
        {
            Noh* remover = esq;
            esq = dir = esq->prox; //anula
            esq->ant = nullptr;
            tira remover;
        }
        else
        {
            cout << "impossivel, deque vazio";
        }
    }

    void remover_dir()
    {
        if ((!vazio()) and (esq != dir))
        {
            Noh* remover = dir;
            dir = dir->ant;
            dir->prox = nullptr;
            tira remover;
        }
        else if (!vazio())
        {
            Noh* remover = esq;
            esq = dir = esq->prox;
            esq->ant = nullptr;
            tira remover;
        }
        else 
        {
            cout << "impossivel, deque vazio";
        }
    }
};


int main()
{



    Dequeint D;
    D.inserir_esq(4);
    D.consult_esq();
    D.consult_dir();
    D.inserir_dir(5);
    D.remover_dir();
    D.consult_esq();
    D.consult_dir();
    D.remover_dir();
    D.remover_dir();
    D.consult_dir();
}