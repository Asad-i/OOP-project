#include "Moves.h"
#include "Attack.h"
#include "Character.h"

// Function to calculate damage 
int Attack::damage_calc() {
    return 0;
}

// Function to set the opponent's type for the attack
void Attack::set_opponent_type(string para_type) {
    opponent_type = para_type;
}

// Function to set the accuracy of the attack
void Attack::set_accuracy() {
    cout << "Decreasing accuracy increases the power of the attack." << endl;
    cout << "Base Power Move of 50 can increase up to 125 by decreasing accuracy up to 50 percent." << endl;
    int integerInput;
    while ((cout << "Change Accuracy to (50-100): ") &&
           (!(cin >> integerInput) || integerInput < 50 || integerInput > 100)) {
        cout << "Invalid Input. Input must be between 50-100 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    accuracy = integerInput;
}

// Function to set the attack type
void Attack::set_attack_type() {
    cout << "Select 1 For Fire" << endl;
    cout << "Select 2 For Grass" << endl;
    cout << "Select 3 For Water" << endl;
    int integerInput;
    while ((cout << "Change Type (1-3): ") &&
           (!(cin >> integerInput) || integerInput < 1 || integerInput > 3)) {
        cout << "Invalid Input. Input must be between 1-3 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if (integerInput == 1) {
        attack_type = "Fire";
        cout << "Successfully changed type to Fire." << endl;
    } else if (integerInput == 2) {
        attack_type = "Grass";
        cout << "Successfully changed type to Grass." << endl;
    } else if (integerInput == 3) {
        attack_type = "Water";
        cout << "Successfully changed type to Water." << endl;
    } else {
        cout << "Invalid Input. Input must be 1, 2, or 3." << endl;
    }
}

// Function to set the power of the attack based on accuracy
void Attack::set_power(int accuracy) {
    // Calculate power based on accuracy
    power = 50 + 1.5 * (100 - accuracy);
}
