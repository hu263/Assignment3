#ifndef cat_h
#define cat_h

#include "animal.h"

class Cat : public Animal
{
public:
    // Constructor (invokes the Animal(string name, double weight) constructor)
    Cat(std::string name, double weight): Animal{name, weight} {
        std::cout << "Cat Constructor" << std::endl;
    } 
    
    // Methods
    void meow() { std::cout << "meowwww" << std::endl; };
    double top_speed() { return (weight_ < 10) ? 14.5 : (weight_ < 15) ? 16.2 : 12.9; }
};

#endif