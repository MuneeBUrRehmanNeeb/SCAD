#include <iostream>
#include <string>

class Engine {
public:
    Engine(std::string type) : type_(type) {}

    void Start() {
        std::cout << "Engine of type " << type_ << " started." << std::endl;
    }

private:
    std::string type_;
};

class Car {
public:
    Car(std::string make, Engine& engine) : make_(make), engine_(engine) {}

    void Start() {
        std::cout << "The " << make_ << " car is starting. ";
        engine_.Start();
    }

private:
    std::string make_;
    Engine& engine_;
};

int main() {
    Engine carEngine("V8");
    Car myCar("Toyota", carEngine);
    
    myCar.Start();

    return 0;
}
