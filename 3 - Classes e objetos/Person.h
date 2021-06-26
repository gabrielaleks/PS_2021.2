#ifndef Person_h
#define Person_h
#include <string>
#include <iostream>

class Person {
private:
    struct Individual {
        int m_age;
        std::string m_name;
    };
    Individual individualData;
    void setAge(int age);
    void setName(std::string name);
public:
    Person(int age, std::string name);
    void changeId(int age, std::string name);
    void getId();
    void changeName(std::string newName);
    void test();
    static void ageDiff(Person p1, Person p2);
};

#endif