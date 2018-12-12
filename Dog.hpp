// Dog specification file
#ifndef DOG_HPP
#define DOG_HPP
#include <string>
using std::string;

class Dog {
private:
    string name;
protected:
    int age;
public:
    void setName(string name);
    void setAge(int age);
};


#endif
