#include "Character.h"

// Default constructor
Character::Character() {
  name = "Character";
  type = "Fire";
  level = 50;
  health = 100;
  p_attack = 100;
  m_attack = 100;
  p_defence = 100;
  m_defence = 100;
  speed = 100;
}

// Parameterized constructor
Character::Character(string para_name, string para_type, int para_level, int para_health, int para_p_attack, int para_m_attack, int para_p_defence, int para_m_defence, int para_speed) {
  name = para_name;
  type = para_type;
  level = para_level;
  health = para_health;
  p_attack = para_p_attack;
  m_attack = para_m_attack;
  p_defence = para_p_defence;
  m_defence = para_m_defence;
  speed = para_speed;
}

// Function to set the character's name
void Character::set_name() {
    string inputName;
    do {
        cout << "New Name: ";
        cin.ignore(); // Clear the input buffer, if needed.
        getline(cin, inputName);
        
        if (inputName.empty()) {
            cout << "Invalid input. Name must not be empty." << endl;
        } else {
            name = inputName;
        }
    } while (name.empty());
}


// Function to set the character's type
void Character::set_type() {
    int inputType;
    do {
        cout << "Select 1 For Fire" << endl;
        cout << "Select 2 For Grass" << endl;
        cout << "Select 3 For Water" << endl;
        
        while (!(cout << "Change Type (1-3): ") || !(cin >> inputType) || inputType < 1 || inputType > 3){
            cout << "Invalid Input. Input must be between 1-3 inclusive." << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        
        if (inputType == 1){
            type = "Fire";
            cout << "Successfully changed type to Fire." << endl;
        } else if (inputType == 2) {
            type = "Grass";
            cout << "Successfully changed type to Grass." << endl;
        } else if (inputType == 3) {
            type = "Water";
            cout << "Successfully changed type to Water." << endl;
        } else {
            cout << "Invalid Input. Input must be 1, 2, or 3." << endl;
        }
    } while (type.empty());
}

// Functions to set various character attributes
void Character::set_level(int para_level) { level = para_level; }
void Character::set_health(int para_health) { health = para_health; }
void Character::set_p_attack(int para_p_attack) { p_attack = para_p_attack; }
void Character::set_m_attack(int para_m_attack) { m_attack = para_m_attack; }
void Character::set_p_defence(int para_p_defence) { p_defence = para_p_defence; }
void Character::set_m_defence(int para_m_defence) { m_defence = para_m_defence; }
void Character::set_speed(int para_speed) { speed = para_speed; }

// Function to set character's stats based on given parameters
void Character::set_stats(int para_level, int para_health, int para_p_attack, int para_m_attack, int para_p_defence, int para_m_defence, int para_speed){
  health = (((2 * para_health * level) / 100) + level + 10);
  p_attack = (((2 * para_p_attack * level) / 100) + 5);
  m_attack = (((2 * para_m_attack * level) / 100) + 5);
  p_defence = (((2 * para_p_defence * level) / 100) + 5);
  m_defence = (((2 * para_m_defence * level) / 100) + 5);
  speed = (((2 * para_speed * level) / 100) + 5);
}

// Functions to retrieve character attributes
string Character::get_name() { return name; }
string Character::get_type() { return type; }
int Character::get_level() { return level; }
int Character::get_health() { return health; }
int Character::get_p_attack() { return p_attack; }
int Character::get_m_attack() { return m_attack; }
int Character::get_p_defence() { return p_defence; }
int Character::get_m_defence() { return m_defence; }
int Character::get_speed() { return speed; }
