#include <iostream>

class Animal {
public:
    void Speak() {
        std::cout << "The animal makes a sound." << std::endl;
    }
};

class Dog : public Animal {
public:
    void Speak() {
        std::cout << "The dog barks." << std::endl;
    }
};

int main() {
    Animal genericAnimal;
    genericAnimal.Speak();

    Dog myDog;
    myDog.Speak();

    return 0;
}
