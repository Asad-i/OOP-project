#include "Character.h"
#include <iostream>

// Function to test the default constructor
bool testDefaultConstructor() {
    Character player;
    return (player.get_health() == 100) && (player.get_name() == "Character") &&
        (player.get_type() == "Fire") && (player.get_level() == 50) &&
        (player.get_p_attack() == 100) && (player.get_m_attack() == 100) &&
        (player.get_p_defence() == 100) && (player.get_m_defence() == 100) &&
        (player.get_speed() == 100);
}

// Function to test the custom constructor
bool testCustomConstructor() {
   Character player("John", "Fire", 50, 60, 70, 80, 90, 100, 100);
    return (player.get_name() == "John") && (player.get_type() == "Fire");
    
}

// Function to test the setters and getters
bool testSettersAndGetters() {
    Character player;
    player.set_name();
    player.set_type(); 
    player.set_health(80);
    player.set_p_attack(70);
    player.set_m_attack(60);
    player.set_p_defence(50);
    player.set_m_defence(40);
    player.set_speed(30);

    return (player.get_name() == "Ace") && (player.get_type() == "Fire") &&
        (player.get_level() == 42) && (player.get_health() == 80) &&
        (player.get_p_attack() == 70) && (player.get_m_attack() == 60) &&
        (player.get_p_defence() == 50) && (player.get_m_defence() == 40) &&
        (player.get_speed() == 30);
}


int main() {
    int passed = 0;
    int total = 3;

    if (testDefaultConstructor()) {
        std::cout << "Default Constructor Test: Passed" << std::endl;
        passed++;
    } else {
        std::cout << "Default Constructor Test: Failed" << std::endl;
    }

    if (testCustomConstructor()) {
        std::cout << "Custom Constructor Test: Passed" << std::endl;
        passed++;
    } else {
        std::cout << "Custom Constructor Test: Failed" << std::endl;
    }

    if (testSettersAndGetters()) {
        std::cout << "Setters and Getters Test: Passed" << std::endl;
        passed++;
    } else {
        std::cout << "Setters and Getters Test: Failed" << std::endl;
    }

    std::cout << "Passed " << passed << " out of " << total << " tests." << std::endl;

    return 0;
}
