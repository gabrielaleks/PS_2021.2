#include <iostream>
using namespace std;

/*
Usamos operadores relacionais na comparação entre valores
Como resultado da comparação temos falso ou verdadeiro (0 ou 1)

Os operadores são:
>
<
==  
!=
>=
<=

*/

int main() {
    int a = 20;
    int b = 30;
    int c = 20;
    int d = 100;
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << "\n\n";

    cout << "a < b: " << (a < b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a == c: " << (a == c) << endl;
    cout << "a != d: " << (a != d) << endl;
    cout << "b >= d: " << (b >= d) << endl;
    cout << "c <= d: " << (c <= d) << endl;
    
    return 0;
}