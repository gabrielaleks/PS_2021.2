#include <iostream>
using namespace std;

// Uma variável pode ser local ou global. Essa área onde ela é reconhecida é chamada de 'escopo'

int globalVar = 35;

void randomFunction() {
    int localVar = 12;
}

int main() {
    // cout << "globalVar: " << globalVar << endl;
    // cout << "localVar: " << localVar << endl;
    
    return 0;
}