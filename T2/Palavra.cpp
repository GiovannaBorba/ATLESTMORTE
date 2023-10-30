#include "Palavra.hpp"
#include "Ocorrencia.hpp"
#include <iostream>

using namespace std;

    Palavra::Palavra(){
        this->palavra = palavra;
    }

    Palavra::Palavra(const string& palavra) {
        this->palavra = palavra; // Inicializa o membro "palavra" com o valor passado
        this->primeiraOcorrencia = 0; // Inicializa o membro "primeiraOcorrencia" com nullptr
    }

    Palavra::Palavra(const string& palavra, ListaDeOcorrencia* lista) : palavra(palavra), listaDeOcorrencia(lista) {
        primeiraOcorrencia = 0;
    }

    int Palavra::PrimeiraOcorrencia(int total){
        int pag = total / 2500 + 1;
        this->primeiraOcorrencia = pag;
        return primeiraOcorrencia;
    }
    int Palavra::obtemPrimeiraOcorrencia(){
        return primeiraOcorrencia;
    }

    string Palavra::definePalavra(string palavra){
        palavra = palavra;
        return palavra;
    }
    string Palavra::getPalavra(){
        return palavra;
    }

void Palavra::setListaDeOcorrencia(ListaDeOcorrencia* lista) {
        listaDeOcorrencia = lista;
    }

ListaDeOcorrencia* Palavra::getListaDeOcorrencia() {
        return listaDeOcorrencia;
    }
    
void Palavra::defineOcorrencia(Palavra* palavra, int total) {
    if (palavra) {
        cout << "Definindo Ocorrencia da palavra: " << palavra->getPalavra() << endl;
        ListaDeOcorrencia* lista = palavra->getListaDeOcorrencia(); // Suponho que você tenha um método para obter a lista de ocorrência.
        cout << "Lista de ocorrencia: " << endl;
        //palavra->listaDeOcorrencia->ImprimeListaOcorrencia();
        if (lista) {
            lista->add(total);
            palavra->listaDeOcorrencia->ImprimeListaOcorrencia();
        }
    }
    cout << "Tchau Tchau!!" << endl;
}

void Palavra::imprimeOcorrencia(){
    ListaDeOcorrencia* lista = getListaDeOcorrencia();
    if (lista) {
        lista->ImprimeListaOcorrencia();
    }
}
