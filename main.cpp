#include "Dog.hpp"
#include <iostream>
using std::endl;
using std::cout;

int main() {
    Dog moe, charlie;
    moe.setName("Moemoe");
    cout << moe.getName() << endl;
    moe.setAge(5);
    cout << moe.getAge() << endl;
    moe.printAddress();
    moe.setColor("grey");
    cout << charlie.getColor() << endl;



    return 0;
}