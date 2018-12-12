// Dog specification file
#ifndef DOG_HPP
#define DOG_HPP
#include <string>
using std::string;

class Dog {
private:
    string name;
    static string color;
protected:
    int age;
public:
    void setName(string name);
    void setAge(int age);
    void setColor(string color);
    string getName();
    string getColor();
    int getAge();
    void printAddress();
};

#endif
