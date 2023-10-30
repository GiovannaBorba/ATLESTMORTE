#ifndef OCORRENCIA_HPP
#define OCORRENCIA_HPP

#include "Palavra.hpp"
using namespace std;

class Palavra;

class Ocorrencia{
public:
    int pag;
    int numOcorrencia;
    Ocorrencia *next;
  // Métodos
  Ocorrencia();
  Ocorrencia(int numOcorrencia);
  Ocorrencia(int numOcorrencia, Ocorrencia *next);
  ~Ocorrencia();
};

class ListaDeOcorrencia{
private:
    Ocorrencia *head; // Referência para o primeiro elemento da lista encadeada.
    Ocorrencia *tail; // Referência para o último elemento da lista encadeada.
    int count; 
    int pag;
    string nome;
public:
    ListaDeOcorrencia(string nome);
    //~ListaDeOcorrencia();
    string getNome();
    string defineNome(string nome);
    void ImprimeListaOcorrencia();
    bool isEmpty();
    int size();
    void add(int total);
    //bool contains(int element);
    bool containsPag(int total);
    int getOcorrencia(int pag);
    void add(int pag, int numOcorrencia);
    int set(int pag, int numOcorrencia);
};

#endif 