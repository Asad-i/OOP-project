#include "Status.h"

// initialising accuracy and default stat
Status::Status() {
  accuracy = 100;
  stat = "p_attack";
}
// Prompting user to select accuracy option
void Status::set_accuracy() {
  cout << "Select 1 to have status increase by 1 stage for 100 percent accuracy."
       << endl;
  cout << "Select 2 to have status increase by 2 stages for 70 percent accuracy."
       << endl;
  cout << "Select 3 to have status increase by 3 stages for 40 percent accuracy."
       << endl;
  int integerInput;
  // ensuring user input is within bounds
  while ((cout << "Change status move (1-5): ") &&
         (!(cin >> integerInput) || integerInput < 1 || integerInput > 3)) {
    cout << "Invalid Input. Input must be between 1-3 inclusive." << endl;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  // sets accuracy base on user choice
  if (integerInput == 1) {
    accuracy = 100;
  } else if (integerInput == 2) {
    accuracy = 70;
  } else if (integerInput == 3) {
    accuracy == 40;
  }
}
// prompt user to choose which stat to increase
void Status::set_stat() {
  cout << "Select 1 to have status increase your Physical Attack." << endl;
  cout << "Select 2 to have status increase your Magical Defence. " << endl;
  cout << "Select 3 to have status increase your Physical Defence. " << endl;
  cout << "Select 4 to have status increase your Magical Defence. " << endl;
  cout << "Select 5 to have status increase your Speed. " << endl;
  int integerInput;
   // ensuring input is valid
  while ((cout << "Change status move (1-5): ") &&
         (!(cin >> integerInput) || integerInput < 1 || integerInput > 5)) {
    cout << "Invalid Input. Input must be between 1-5 inclusive." << endl;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
   // selecting stat based on user input
  if (integerInput == 1) {
    stat = "p_attack";
    cout << "Sucessfully changed status move to increase Physical Attack."
         << endl;
  } else if (integerInput == 2) {
    stat = "m_attack";
    cout << "Sucessfully changed status move to increase Mhysical Attack."
         << endl;
  } else if (integerInput == 3) {
    stat = "p_defence";
    cout << "Sucessfully changed status move to increase Physical Defence."
         << endl;
  } else if (integerInput == 4) {
    stat = "m_defence";
    cout << "Sucessfully changed status move to increase Magical Defence."
         << endl;
  } else if (integerInput == 5) {
    stat = "speed";
    cout << "Sucessfully changed status move to increase Speed." << endl;
  } else {
    cout << "Invalid Input. Input must be 1-5 inclusive." << endl;
  }
}
// determines which stats increase and by how many stages.
void Status::increase(string stat) {
  if (accuracy == 40) {
    uses + 3;
    if (stat == "p_attack" && uses <= 8) {
      set_p_attack(p_attack * (uses / 2) / ((uses - 3) / 2));
      cout << "Physical Attack has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "m_attack" && uses <= 8) {
      set_m_attack(m_attack * (uses / 2) / ((uses - 3) / 2));
      cout << "Magical Attack has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "p_defence" && uses <= 8) {
      set_p_defence(m_attack * (uses / 2) / ((uses - 3) / 2));
      cout << "Physical Defence has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "m_defence" && uses <= 8) {
      set_m_defence(m_attack * (uses / 2) / ((uses - 3) / 2));
      cout << "Magical Defence has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "speed") {
      set_speed(m_attack * (uses / 2) / ((uses - 1) / 2));
      cout << "Speed has Increased!" << endl;
      int consecutive = 0;
    }
  } else {
    cout << "Move Missed!" << endl;
  }
  if (accuracy == 70) {
    uses + 2;
    if (stat == "p_attack" && uses <= 8) {
      set_p_attack(p_attack * (uses / 2) / ((uses - 2) / 2));
      cout << "Physical Attack has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "m_attack" && uses <= 8) {
      set_m_attack(m_attack * (uses / 2) / ((uses - 2) / 2));
      cout << "Magical Attack has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "p_defence" && uses <= 8) {
      set_p_defence(m_attack * (uses / 2) / ((uses - 2) / 2));
      cout << "Physical Defence has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "m_defence" && uses <= 8) {
      set_m_defence(m_attack * (uses / 2) / ((uses - 2) / 2));
      cout << "Magical Defence has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "speed") {
      set_speed(m_attack * (uses / 2) / ((uses - 2) / 2));
      cout << "Speed has Increased!" << endl;
      int consecutive = 0;
    }
  } else {
    cout << "Move Missed!" << endl;
  }
  if (accuracy == 100) {
    uses++;
    if (stat == "p_attack" && uses <= 8) {
      set_p_attack(p_attack * (uses / 2) / ((uses - 1) / 2));
      cout << "Physical Attack has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "m_attack" && uses <= 8) {
      set_m_attack(m_attack * (uses / 2) / ((uses - 1) / 2));
      cout << "Magical Attack has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "p_defence" && uses <= 8) {
      set_p_defence(m_attack * (uses / 2) / ((uses - 1) / 2));
      cout << "Physical Defence has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "m_defence" && uses <= 8) {
      set_m_defence(m_attack * (uses / 2) / ((uses - 1) / 2));
      cout << "Magical Defence has Increased!" << endl;
      int consecutive = 0;
    }
    if (stat == "speed") {
      set_speed(m_attack * (uses / 2) / ((uses - 1) / 2));
      cout << "Speed has Increased!" << endl;
      consecutive = 0;
    }
  } else {
    cout << "Move Missed!" << endl;
  }
}