#include "Dog.hpp"
#include <iostream>
using std::endl;
using std::cout;

int main() {
    Dog moe;
    moe.setName("Moemoe");
    cout << moe.getName() << endl;

    return 0;
}