#include <iostream>
using namespace std;

// Se tivermos que tomar uma decisão entre várias e a condição for o valor de uma mesma variável, podemos usar o switch
// ao invés de uma cadeia gigante de if... else

/* switch
- variável a ser avaliada
- casos com os possíveis valores da variável
- break: sai do switch
- default: caso onde nenhuma condição foi atingida
*/

int main() {
    int month;
    cout << "Digite o mês do seu aniversário: ";
    cin >> month;

    switch (month) {
        case 1:
            cout << "Você nasceu em janeiro" << endl;
            break;
        case 2:
            cout << "Você nasceu em fevereiro" << endl;
            break;
        case 3:
            cout << "Você nasceu em março" << endl;
            break;
        case 4:
            cout << "Você nasceu em abril" << endl;
            break;
        case 5:
            cout << "Você nasceu em maio" << endl;
            break;
        case 6:
            cout << "Você nasceu em junho" << endl;
            break;
        case 7:
            cout << "Você nasceu em julho" << endl;
            break;
        case 8:
            cout << "Você nasceu em agosto" << endl;
            break;
        case 9:
            cout << "Você nasceu em setembro" << endl;
            break;
        case 10:
            cout << "Você nasceu em outubro" << endl;
            break;
        case 11:
            cout << "Você nasceu em novembro" << endl;
            break;
        case 12:
            cout << "Você nasceu em dezembro" << endl;
            break;
        default:
            cout << "Digite um mês válido!" << endl;
            break;
    }

    return 0;
}