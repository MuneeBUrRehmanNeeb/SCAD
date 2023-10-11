#include <iostream>

class Shape {
public:
    virtual void Draw() = 0;  // Pure virtual function for abstraction
};

class Circle : public Shape {
public:
    void Draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Circle circle;
    Shape& shapeRef = circle;
    
    shapeRef.Draw();

    return 0;
}
