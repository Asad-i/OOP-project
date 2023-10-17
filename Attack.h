#ifndef Attack_H
#define Attack_H

#include <iostream>
#include <limits>
#include <string>
#include "Moves.h" // Include the base class header

class Attack : public Moves { // Define the Attack class, inheriting from the Moves class
protected:
    string attack_type; // Type of the attack
    int power; // Power of the attack
    string opponent_type; // Type of the opponent the attack targets
    int damage; // Damage caused by the attack

public:
    virtual int damage_calc(); // Virtual function to calculate damage, to be implemented in derived classes
    void set_opponent_type(string para_type); // set the opponent's type for the attack
    void set_accuracy(); // set the accuracy of the attack
    void set_attack_type(); // set the type of the attack
    void set_power(int para_accuracy); // Function to set the power of the attack based on accuracy
};

#endif
