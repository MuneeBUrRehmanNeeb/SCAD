#include <iostream>

class Person {
protected:
    std::string name;

public:
    Person(std::string name) : name(name) {}

    void DisplayInfo() {
        std::cout << "Name: " << name << std::endl;
    }
};

class Student : public Person {
private:
    int studentID;

public:
    Student(std::string name, int studentID) : Person(name), studentID(studentID) {}

    void DisplayInfo() {
        std::cout << "Student ID: " << studentID << std::endl;
        Person::DisplayInfo();
    }
};

int main() {
    Student student("Alice", 12345);
    student.DisplayInfo();

    return 0;
}
