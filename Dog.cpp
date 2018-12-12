// Dog implementation file
#include "Dog.hpp"
#include <iostream>
using std::cout;
using std::endl;

string Dog::color;

void Dog::setName(string name) {
    this->name = name;
}
void Dog::setColor(string color) {
    this->color = color;
}
void Dog::setAge(int age) {
    this->age = age;
}
string Dog::getName() {
    return this->name;
}
string Dog::getColor() {
    return this->color;
}
int Dog::getAge() {
    return this->age;
}
void Dog::printAddress() {
    cout << this->age << endl;
}