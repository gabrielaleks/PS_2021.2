#include "Person.h"

// Construtor; na declaração do objeto colocamos como argumento a idade e o nome
Person::Person(int age, std::string name) {
    setAge(age);
    setName(name);
}

// Método público usado na mudança de idade e nome
void Person::changeId(int age, std::string name) {
    setAge(age);
    setName(name);
}

// Método público usado na visualização do nome e idade
void Person::getId() {
    std::cout << "Seu nome: "  << individualData.m_name << std::endl;
    std::cout << "Sua idade: " << individualData.m_age << std::endl;
}

// Método privado usado na definição da idade
void Person::setAge(int age) {
    individualData.m_age = age;
}

// Método privado usado na definição do nome
void Person::setName(std::string name) {
    individualData.m_name = name;
}

// Método estático usado para determinar a diferença de idade entre dois objetos da classe Person
void Person::ageDiff(Person p1, Person p2) {
    int ageDiff = p1.individualData.m_age - p2.individualData.m_age;
    std::cout << "Age diff: " << ageDiff << "\n";
}