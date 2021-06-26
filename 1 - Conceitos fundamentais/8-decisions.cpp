#include <iostream>
using namespace std;

// As tomadas de decisão são feitas no código com os statements de if... else
// Uma condição é checada e, se ela for verdadeira, um trecho de código é executado. Se não, um outro trecho é executado.

int main() {
    int x;
    
    cout << "Insira um número: ";
    cin >> x;

    // if (x < 100) {
    //     cout << "O número é menor que 100";
    // } else {
    //     cout << "O número é maior que 100";
    // }

    // Podemos também aninhar ifs
    // if (x < 100) {
    //     if (x < 50) {
    //         cout << "O número é menor que 50";
    //     } else {
    //         cout << "O número é maior que 50 e menor que 100";
    //     }
    // } else {
    //     if (x > 200) {
    //         cout << "O número é maior que 200";
    //     } else {
    //         cout << "O número é maior que 100 e menor que 200";
    //     }
    // }


    // Podemos testar múltiplas condições de uma vez sem aninhar
    if (x < 100) {
        cout << "O número é menor que 100" ;
    } else if (x > 200) {
        cout << "O número é maior que 200";
    } else {
        cout << "O número é maior que 100 e menor que 200";
    }

    cout << endl;

    return 0;
}