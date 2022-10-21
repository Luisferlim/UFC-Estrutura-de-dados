#include <iostream>

using namespace std;


class DequeInt
{
  struct Noh
  {
    int elem;
    Noh *ant, *prox;
    Noh(int elem = 0) : prox(nullptr), ant(nullptr), elem(elem)  {}
  };
  
public:
    Noh * esq, *dir;//criar os ponteiros do deque
    int tam;
  int consultar_dir ()
  {
    if (!vazio())
      {
    	return dir->elem;
      }
  }
  
  int consultar_esq ()
  {
    if (!vazio())
      {
        return esq->elem;
      }
  }
  
  DequeInt() : esq(nullptr), dir(nullptr), tam(0) {}
  
  ~DequeInt ()
  {
    Noh *aux;
    while (!vazio())
      {
	    aux = dir->ant;
	    delete dir;
	    dir = aux;
	    delete aux;
	    if (dir == nullptr)
	        {
	        delete esq, dir;
	        }
      }
  }

  void inserir_dir (int e)
  {
      Noh *a = new Noh;
      
      if (vazio())
      {
          dir = new Noh a;
          
      }
      if (!vazio())
      {
        dir->prox = new Noh;    
      }

  }
  void inserir_esq (int e)
  {
  }
  void remover_dir ()
  {
  }
  void remover_esq ()
  {
  }
  bool vazio ()
  {
    return !tam;
  }
};

int
main ()
{
  cout << "Hello World";

  return 0;
}
