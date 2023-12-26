#ifndef dog_h
#define dog_h

#include "animal.h"

class Dog : public Animal
{
public:
    // Constructor (invokes the Animal(string name, double weight) constructor)
    Dog(std::string name, double weight): Animal{name, weight} {
        std::cout << "Dog Constructor" << std::endl;
    }

    // Methods
    void bark() { std::cout << "woof woof" << std::endl; };
    double top_speed() { return (weight_ < 40) ? 15.5 : (weight_ < 90) ? 17.0 : 16.2; }
};

#endif