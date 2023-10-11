#include <iostream>

class Car {
public:
    Car(std::string make, int year) : make_(make), year_(year) {}

    void Start() {
        std::cout << "The " << year_ << " " << make_ << " car is starting." << std::endl;
    }

private:
    std::string make_;
    int year_;
};

int main() {
    Car myCar("Toyota", 2020);
    myCar.Start();

    return 0;
}
