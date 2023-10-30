#ifndef PALAVRA_HPP
#define PALAVRA_HPP

using namespace std;

#include <string>

class ListaOrdenadaDePalavras; // Declarando a classe ListaOrdenadaDePalavras para amizade
class ListaDeOcorrencia;

class Palavra {
public:
    Palavra();
    Palavra(const string& palavra);
    Palavra(const string& palavra, ListaDeOcorrencia* lista);
    int PrimeiraOcorrencia(int total);
    int obtemPrimeiraOcorrencia();
    string getPalavra();
    string definePalavra(string palavra);
    void defineOcorrencia(Palavra* palavra, int total);
    ListaDeOcorrencia* getListaDeOcorrencia();
    void setListaDeOcorrencia(ListaDeOcorrencia* lista);
    void imprimeOcorrencia();
//private:
    string palavra;
    Palavra* next;
    int primeiraOcorrencia;
    ListaDeOcorrencia* listaDeOcorrencia;
    friend class ListaOrdenadaDePalavras; // Permitindo que a classe ListaOrdenadaDePalavras acesse membros privados
    friend class ListaDeOcorrencia;
};

#endif