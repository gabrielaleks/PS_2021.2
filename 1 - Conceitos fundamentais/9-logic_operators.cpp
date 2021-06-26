#include <iostream>
using namespace std;

// Usamos operadores lógicos para combinar expressões booleanas

/* Operadores: 
&& (AND)
|| (OR)
! (NOT)
*/

int main() {
    int x;
    
    cout << "Insira um número: ";
    cin >> x;
    
    // Exemplo com AND
    // if (x < 50) {
    //     cout << "O número é menor que 50";
    // } else if (x > 50 && x < 100) {
    //     cout << "O número é maior que 50 e menor que 100";
    // } else if (x > 100 && x < 200) {
    //     cout << "O número é maior que 100 e menor que 200";
    // } else if (x > 200) {
    //     cout << "O número é maior que 200";
    // }

    // Exemplo com OR
    // if (x < 10 || x > 20) {
    //     cout << "x é menor que 10 ou maior que 20";
    // }

    // Exemplo com NOT
    if (!(x % 2 == 0)) {
        cout << x;
    }

    cout << endl;
    return 0;
}