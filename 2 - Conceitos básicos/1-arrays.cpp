#include <iostream>
using namespace std;

int main() {
    int myAgeIsNot;
    // Formas de declarar
    int x[6] = {19, 10, 8, 17, 9, 15};
    // int x[] = {19, 10, 8, 17, 9, 15};

    // Visualizando elementos do array
    for (int i = 0; i < 6; ++i) {
        cout << x[i] << " ";
    }

    // Observação: cuidado com os limites do array

    cout << endl;
    return 0;
}