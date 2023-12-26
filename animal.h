#ifndef animal_h
#define animal_h

class Animal 
{
public:
    // Getters
    std::string get_name() { return name_; };
    double get_weight() { return weight_; };
    
protected: // Accessible by Animal and classes that inherit it
    // Constructor
    Animal(std::string name, double weight): name_{name}, weight_{weight} {
        std::cout << "Animal Constructor" << std::endl;
    };
    
    // Member vars
    std::string name_;
    double weight_;
};

#endif