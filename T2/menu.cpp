#include "menu.hpp"

void encerrando(){
    cout << "------------------------------" << endl;
    cout << "Encerrando..." << endl;
    system("sleep 2");
    system("clear");
}

string str(){
     stringstream ss;
     ss << "------------------------------" << endl;
     ss << "MENU DO USUARIO:" << endl << endl;
     ss << "[1. Exibir todo o indice remissivo (em ordem alfabetica)]" << endl;
     ss << "[2. Exibir todo o indice remissivo (em ordem decrescente)]" << endl;
     ss << "[3. Exibir informacoes sobre a catalogacao]" << endl;
     ss << "[4. Exibir a palavra com o maior numero de ocorrencia]" << endl;
     ss << "[5. Exibir as paginas de ocorrencia de uma palavra]" << endl;
     ss << "[6. Exibir ocorrencia de uma palavra em uma determinada pagina]" << endl;
     ss << "[7. Encerrar o programa]" << endl;
     ss << endl;
     ss << "Digite o número da função que deseja executar: ";
     return ss.str();
}

int saida(){
    int menu; 
    cout << endl << "[0. Retornar ao menu]" << endl << "[7. Encerrar o programa]" << endl << endl;
    cout << "Digite o número da função que deseja executar: ";
    cin >> menu;
    //cout << endl;
    return menu;
}

int FuncaoTres(){
    int tres; 
    cout << endl << "[0. Retornar ao menu]" << endl;
    cout << "[1. Retornar Percentual de palavras catalogadas]" << endl;
    cout << "[2. Retornar Numero de palavras diferentes registradas no indice remissivo]" << endl;
    cout << "[3. Retornar Numero total de palavras registradas no indice remissivo]" << endl;
    cout << "[4. Retornar Numero total de stopwords descartados]" << endl;
    cout << "[7. Encerrar o programa]" << endl;
    cout << "Digite o número da função que deseja executar: ";
    cin >> tres;
    cout << endl;
    return tres;
}
