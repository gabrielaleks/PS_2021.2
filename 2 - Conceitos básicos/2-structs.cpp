#include <iostream>
using namespace std;

int main() {
    struct livro {
        string nome;
        string autor;
        float ano;
        float nota;
    };

    livro livro1;
    livro livro2;

    livro1.nome = "duna";
    livro1.autor = "frank herbert";
    livro1.ano = 1965;
    livro1.nota = 8.2;

    livro2.nome = "cosmos";
    livro2.autor = "carl sagan";
    livro2.ano = 1980;
    livro2.nota = 7.8;

    cout << "Autores: " << livro1.autor << ", " << livro2.autor << endl;
    
    return 0;
}