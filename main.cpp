#include "Dog.hpp"
#include <iostream>
using std::endl;
using std::cout;

int main() {
    Dog moe;
    moe.setName("Moemoe");
    cout << moe.getName() << endl;
    moe.setAge(5);
    cout << moe.getAge() << endl;

    return 0;
}