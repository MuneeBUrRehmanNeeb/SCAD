#include <iostream>

class Shape {
public:
    virtual void Draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void Draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Shape* shape1 = new Shape();
    Shape* shape2 = new Circle();

    shape1->Draw();
    shape2->Draw();

    delete shape1;
    delete shape2;

    return 0;
}
