#include <iostream>
#include "Person.h"
#include <string>

int main() {
    // Instâncias da classe Person criadas
    Person arnaldo(58, "Arnaldo");
    Person laura(23, "Laura");

    // Métodos da classe Person acessados por objetos diferentes
    arnaldo.getId();
    laura.getId();

    // Método estático da classe Person usando os objetos da classe Person como argumento para determinar. 
    // Um método estático de uma classe é chamado sem que seja necessário um objeto
    Person::ageDiff(arnaldo, laura);
    
    return 0;
}