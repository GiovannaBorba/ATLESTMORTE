#include <iostream>
#include <sstream>
using namespace std;

#include "ListaOrdenadaDePalavras.hpp"
#include "Palavra.hpp"
#include "LeitorArquivo.hpp"
#include "Ocorrencia.hpp"

    ListaOrdenadaDePalavras::ListaOrdenadaDePalavras() : primeiro(nullptr){}
    ListaOrdenadaDePalavras::~ListaOrdenadaDePalavras(){
        // Comece pelo primeiro nó da lista
    Palavra* atual = primeiro;
    while (atual) {
        Palavra* proximo = atual->next; // Guarde o próximo nó antes de excluir o atual
        delete atual; // Libere a memória alocada para o objeto Palavra
        atual = proximo; // Avance para o próximo nó
    }
}

    void ListaOrdenadaDePalavras::ImprimeLista(){
 Palavra* atual = primeiro;

    while (atual) {
        cout << atual->palavra << " || " << atual->primeiraOcorrencia << endl;
        //atual->imprimeOcorrencia();  // Chama a função para imprimir a lista de ocorrência

        atual = atual->next;
    }

    cout << "nullptr" << std::endl;
}
    

    //}
    int ListaOrdenadaDePalavras::size(){
        return 1;
    }
    void ListaOrdenadaDePalavras::clear(){

    }

    void ListaOrdenadaDePalavras::add(Palavra* palavra, int total){
    for (char &c : palavra->getPalavra()) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a'; // Converte caracteres maiúsculos para minúsculos
        }
    }

    // Cria um novo objeto Palavra no heap e inicializa com a string palavra
    Palavra* novaPalavra = new Palavra(palavra->getPalavra());

    // Verifica se a lista está vazia ou se a nova palavra deve ser a primeira na lista
    if (!primeiro || palavra->getPalavra() < primeiro->getPalavra()) {
        novaPalavra->next = primeiro;
        primeiro = novaPalavra;
        novaPalavra->primeiraOcorrencia = novaPalavra->PrimeiraOcorrencia(total); // Torna a nova palavra a primeira na lista
    } else {
        Palavra* atual = primeiro;
        while (atual->next && palavra->getPalavra() > atual->next->getPalavra()) {
            atual = atual->next; // Percorre a lista para encontrar a posição correta
        }

        novaPalavra->next = atual->next;
        atual->next = novaPalavra; // Insere a nova palavra na posição correta
        novaPalavra->primeiraOcorrencia = novaPalavra->PrimeiraOcorrencia(total);
    }
}

    //cout << endl;
 


    void ListaOrdenadaDePalavras::remove(){

    }

    bool ListaOrdenadaDePalavras::contains(string palavra){
                 for (char &c : palavra) {
            if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a'; // Converte caracteres maiúsculos para minúsculos
        }
    }
        Palavra* atual = primeiro;
    
         while (atual != nullptr) {
        if (atual->palavra == palavra) {
            return true; // Encontrou a palavra na lista
        }
        atual = atual->next;
    }
    
    return false; // A palavra não foi encontrada na lista
 
    }

    string ListaOrdenadaDePalavras::lowercase(string palavra){
         for (char &c : palavra) {
            if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a'; // Converte caracteres maiúsculos para minúsculos
        }
    }
    return palavra;
}


    int ListaOrdenadaDePalavras::get(int index){
        return 1;
    }

    int ListaOrdenadaDePalavras::pagina(int total, string palavra){
    int caracter = 0;

    for (int i = 0; palavra[i] != '\0'; i++) {
        caracter++;
    }
    total+=caracter;
    return total;
    }

    void ListaOrdenadaDePalavras::OrdenaAlfabetica(){
            if (!primeiro || !primeiro->next) {
        // A lista está vazia ou contém apenas um elemento, que já está ordenado
        return;
    }

    bool trocou;
    do {
        trocou = false;
        Palavra* atual = primeiro;
        Palavra* anterior = nullptr;

        while (atual->next) {
            if (atual->palavra > atual->next->palavra) {
                // Troca as palavras se estiverem fora de ordem
                Palavra* temp = atual->next;
                atual->next = temp->next;
                temp->next = atual;
                if (anterior) {
                    anterior->next = temp;
                } else {
                    primeiro = temp;
                }
                trocou = true;
            }

            // Avança para o próximo par de palavras
            anterior = atual;
            atual = atual->next;
        }
    } while (trocou);
}

    void ListaOrdenadaDePalavras::OrdenaOcorrencia(){

    }

    bool ListaOrdenadaDePalavras::StopWords(string palavra){
                 for (char &c : palavra) {
            if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a'; // Converte caracteres maiúsculos para minúsculos
        }
    }
        LeitorArquivo stop = LeitorArquivo("StopWords/stopwords-en.txt");
        while(1){
        string a = stop.proximaPalavra(); 
            for (char &c : a) {
            if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a'; // Converte caracteres maiúsculos para minúsculos
        }
    }
        if(palavra == a){
            return false;
        }
        //cout << b << endl;
        count++;
        if(a.empty()){
            return true;  
        }
    }
    }
    void ListaOrdenadaDePalavras::CountStopwords(){

    }

    void ListaOrdenadaDePalavras::Percentual(){

    }

    void ListaOrdenadaDePalavras::PesquisaPalavra(){

    }

    void ListaOrdenadaDePalavras::PesquinaPagina(){

    }

    void ListaOrdenadaDePalavras::exibirLista() const{

    }
