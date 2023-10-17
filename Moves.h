#ifndef Moves_H
#define Moves_H

#include "Character.h" // Include the Character class for inheritance
#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Moves : public Character { // Define the Moves class, inheriting from the Character class
protected:
    int accuracy; // The accuracy of the move
    int consecutive = 0; // A count of consecutive moves

public:
    virtual void set_accuracy(); // Virtual function to set the accuracy of the move 
};

#endif
