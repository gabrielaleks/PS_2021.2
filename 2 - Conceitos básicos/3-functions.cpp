#include <iostream>
using namespace std;

void olaMundo();
int soma(int x, int y);

int main() {
    // olaMundo();
    int valorSoma = soma(9, 5);
    cout << "O valor da soma é: " << valorSoma << endl;
    return 0;
}

void olaMundo() {
    cout << "ola mundo!" << endl;
}

int soma(int x, int y) {
    cout << "Aqui está sendo feita uma soma" << endl;
    return x + y;
}