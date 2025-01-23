#include <iostream>
using namespace std;

// Base class
class Animal {
private:
    int a;
    int b;
public:
    Animal(int a, int b) : a(a), b(b) {}
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
    
    // Friend function declaration
    friend void func(Animal &obj);
};


void func(Animal &obj){
    cout << "Ans: " << obj.a + obj.b << endl;
}

// Derived class (optional in this case)
class Dog : public Animal {
public:
    Dog(int a, int b) : Animal(a, b) {}  // Constructor to initialize base class
    
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    // Using an Animal object
    Animal animal(4, 5);
    animal.sound();  // Output: Animal makes a sound
    func(animal);
    // // Using a pointer to Animal, pointing to a Dog object
    // Animal* animalPtr = new Dog(4, 5); // Creating Dog with a, b values
    // animalPtr->sound();  // Output: Dog barks

    // // Calling the friend function
    // func(animal);  // Output: Ans: 9

    // // Clean up
    // delete animalPtr;

    return 0;
}
