// Dog implementation file
#include "Dog.hpp"

void Dog::setName(string name) {
    this->name = name;
}
void Dog::setAge(int age) {
    this->age = age;
}
string Dog::getName() {
    return this->name;
}
int Dog::getAge() {
    return this->age;
}