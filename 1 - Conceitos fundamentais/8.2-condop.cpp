#include <iostream>
using namespace std;

// É muito comum querermos atribuir um valor a uma variável dependendo se uma condição é true ou false
// Por isso, existe um operador próprio pra essa situação

int main() {
    int x;
    int y;

    cout << "Digite um valor (0 ou 1) p/ x: ";
    cin >> x;

    // if (x == 0) {
    //     y = 1;
    // } else {
    //     y = 0;
    // }

    // cout << "x: " << x << endl; 
    // cout << "y: " << y << endl;
    




    y = (x == 0) ? 1 : 0;
    
    cout << "x: " << x << endl; 
    cout << "y: " << y << endl;
    
    return 0;
}