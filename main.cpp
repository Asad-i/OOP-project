#include <unistd.h>
#include "Character.h"

int main(void) {
  Character player1 = Character();
  Character player2 = Character();
  cout << "Welcome to 1 v 1 Battle Simulation! The Battle Simulation has "
          "two players customise two characters to fight."
       << endl;
  sleep(2);
  cout << "First, each player may give their character a name." << endl;
  sleep(2);
  cout << "Next, each player will determine their character type; Fire, Water "
          "or Grass."
       << endl;
  sleep(2);
  cout << "Fire attacks do more damage to Grass characters." << endl;
  cout << "Grass attacks do more damage to Water characters." << endl;
  cout << "Water attacks do more damage to Fire characters." << endl;
  sleep(2);
  cout << "Lastly, each player will allocate 600 points to 6 individual stats."
       << endl;
  sleep(2);
  cout << "Each Stat can be allocated a value between 1 to 250." << endl;
  sleep(2);
  cout << "Stat 1-Health: Health determines your character's healthpoint stat"
       << endl;
  sleep(2);
  cout << "Stat 2-Physical Attack: This attack determines how much physical "
          "attack damage your character will inflect on your opponent."
       << endl;
  sleep(2);
  cout << "Stat 3-Physical Defence: This defence determines how well you "
          "resist physical attack."
       << endl;
  sleep(2);
  cout << "Stat 4-Magical Attack: This attack determines how much magical "
          "attack damage your character will inflect on your opponent."
       << endl;
  sleep(2);
  cout << "Stat 5-Magical Defence: This defence determines how well you "
          "resist magical attack."
       << endl;
  cout << "Stat 6-Speed: Speed determines which character goes first" << endl;
  sleep(2);
  cout << "Each player will begin with a default character with pre-set values."
       << endl;

  cout << "--------------------------------------------------------" << endl;
  int menuInput;
  int valueInput;
  int stat_total;

  cout << "Current Player 1 Character Information" << endl;
  cout << "(1)-Name: " << player1.get_name() << endl;
  cout << "(2)-Type: " << player1.get_type() << endl;
  cout << "(3)-Level: " << player1.get_level() << endl;
  cout << "(4)-Health: " << player1.get_health() << endl;
  cout << "(5)-Physical Attack: " << player1.get_p_attack() << endl;
  cout << "(6)-Magical Attack: " << player1.get_m_attack() << endl;
  cout << "(7)-Physical Defence: " << player1.get_p_defence() << endl;
  cout << "(8)-Magical Defence: " << player1.get_m_defence() << endl;
  cout << "(9)-Speed: " << player1.get_speed() << endl;
  cout << "Press 0 when you are ready. Press 1-9 to change the corresponding "
          "value or stat. Press 10 to see updated character information. "
       << endl;

  bool ready = "false";
  while (ready = "false") {
    cout << "--------------------------------------------------------" << endl;
    stat_total = player1.get_health() + player1.get_p_attack() +
                 player1.get_m_attack() + player1.get_p_defence() +
                 player1.get_m_defence() + player1.get_speed();
    cout << "Current Stat Total (Aim for 600): " << stat_total << endl;
    while ((cout << "Finished (0), Change Stats(1-9), View Stats(10): ") &&
           (!(cin >> menuInput) || menuInput < 0 || menuInput > 10)) {
      cout << "Invalid Input. Input must be between 0-10 inclusive." << endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if (menuInput == 0) {
      if (stat_total != 600) {
        cout << "Your stat total doesn't equal 600. Please change your stats "
                "to equal 600"
             << endl;
        cout << "--------------------------------------------------------"
             << endl;
        cout << "Current Stats" << endl;
        cout << "Health: " << player1.get_health() << endl;
        cout << "Physical Attack: " << player1.get_p_attack() << endl;
        cout << "Magical Attack: " << player1.get_m_attack() << endl;
        cout << "Physical Defence: " << player1.get_p_defence() << endl;
        cout << "Magical Defence: " << player1.get_m_defence() << endl;
        cout << "Speed: " << player1.get_speed() << endl;
      }
      if (stat_total == 600) {
        cout << "--------------------------------------------------------"
             << endl;
        cout << "Current Player 1 Character Information" << endl;
        cout << "(1)-Name: " << player1.get_name() << endl;
        cout << "(2)-Type: " << player1.get_type() << endl;
        cout << "(3)-Level: " << player1.get_level() << endl;
        cout << "(4)-Health: " << player1.get_health() << endl;
        cout << "(5)-Physical Attack: " << player1.get_p_attack() << endl;
        cout << "(6)-Magical Attack: " << player1.get_m_attack() << endl;
        cout << "(7)-Physical Defence: " << player1.get_p_defence() << endl;
        cout << "(8)-Magical Defence: " << player1.get_m_defence() << endl;
        cout << "(9)-Speed: " << player1.get_speed() << endl;
        cout << "--------------------------------------------------------"
             << endl;
        while ((cout << "Confirm Your Character. Press 1 to Confirm. Press 0 "
                        "if you want to continuing editing: ") &&
               (!(cin >> valueInput) || valueInput < 0 || valueInput > 1)) {
          cout << "Invalid Input. Input must be between 0-1 inclusive." << endl;
          cin.clear();
          cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if (valueInput == 1) {
          ready = "true";
          player1.set_stats(player1.get_level(), player1.get_health(),
                            player1.get_p_attack(), player1.get_m_attack(),
                            player1.get_p_defence(), player1.get_m_defence(),
                            player1.get_speed());
          break;
        }
      }
    } else if (menuInput == 1) {
      player1.set_name();
    } else if (menuInput == 2) {
      player1.set_type();
    } else if (menuInput == 3) {
      while ((cout << "New Level (1-100): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 100)) {
        cout << "Invalid Input. Input must be between 1-100 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player1.set_level(valueInput);
    } else if (menuInput == 4) {
      while ((cout << "New Health Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player1.set_health(valueInput);
    } else if (menuInput == 5) {
      while ((cout << "New Physical Attack Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player1.set_p_attack(valueInput);
    } else if (menuInput == 6) {
      while ((cout << "New Magical Attack Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player1.set_m_attack(valueInput);
    } else if (menuInput == 7) {
      while ((cout << "New Physical Defence Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player1.set_p_defence(valueInput);
    } else if (menuInput == 8) {
      while ((cout << "New Magical Defence Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player1.set_m_defence(valueInput);
    } else if (menuInput == 9) {
      while ((cout << "New Speed Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player1.set_speed(valueInput);
    } else if (menuInput == 10) {
      cout << "--------------------------------------------------------"
           << endl;
      cout << "Current Player 1 Character Stats" << endl;
      cout << "(1)Name: " << player1.get_name() << endl;
      cout << "(2)Type: " << player1.get_type() << endl;
      cout << "(3)Level: " << player1.get_level() << endl;
      cout << "(4)Health: " << player1.get_health() << endl;
      cout << "(5)Physical Attack: " << player1.get_p_attack() << endl;
      cout << "(6)Magical Attack: " << player1.get_m_attack() << endl;
      cout << "(7)Physical Defence: " << player1.get_p_defence() << endl;
      cout << "(8)Magical Defence: " << player1.get_m_defence() << endl;
      cout << "(9)Speed: " << player1.get_speed() << endl;
      cout << "--------------------------------------------------------"
           << endl;
    } else {
      cout << "Invalid Input. Input must be between 0-10 inclusive." << endl;
    }
  }
  cout << "Current Player 2 Character Information" << endl;
  cout << "(1)-Name: " << player2.get_name() << endl;
  cout << "(2)-Type: " << player2.get_type() << endl;
  cout << "(3)-Level: " << player2.get_level() << endl;
  cout << "(4)-Health: " << player2.get_health() << endl;
  cout << "(5)-Physical Attack: " << player2.get_p_attack() << endl;
  cout << "(6)-Magical Attack: " << player2.get_m_attack() << endl;
  cout << "(7)-Physical Defence: " << player2.get_p_defence() << endl;
  cout << "(8)-Magical Defence: " << player2.get_m_defence() << endl;
  cout << "(9)-Speed: " << player2.get_speed() << endl;
  cout << "Press 0 when you are ready. Press 1-9 to change the corresponding "
          "value or stat. Press 10 to see updated character information. "
       << endl;

  bool ready2 = "false";
  while (ready2 = "false") {
    cout << "--------------------------------------------------------" << endl;
    stat_total = player2.get_health() + player2.get_p_attack() +
                 player2.get_m_attack() + player2.get_p_defence() +
                 player2.get_m_defence() + player2.get_speed();
    cout << "Current Stat Total (Aim for 600): " << stat_total << endl;
    while (
        (cout << "cout << Finished (0), Change Stats(1-9), View Stats(10): ") &&
        (!(cin >> menuInput) || menuInput < 0 || menuInput > 10)) {
      cout << "Invalid Input. Input must be between 0-10 inclusive." << endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if (menuInput == 0) {
      if (stat_total != 600) {
        cout << "Your stat total doesn't equal 600. Please change your stats "
                "to equal 600"
             << endl;
        cout << "--------------------------------------------------------"
             << endl;
        cout << "Current Stats" << endl;
        cout << "Health: " << player2.get_health() << endl;
        cout << "Physical Attack: " << player2.get_p_attack() << endl;
        cout << "Magical Attack: " << player2.get_m_attack() << endl;
        cout << "Physical Defence: " << player2.get_p_defence() << endl;
        cout << "Magical Defence: " << player2.get_m_defence() << endl;
        cout << "Speed: " << player2.get_speed() << endl;
      }
      if (stat_total == 600) {
        cout << "--------------------------------------------------------"
             << endl;
        cout << "Current Player 2 Character Information" << endl;
        cout << "(1)Name: " << player2.get_name() << endl;
        cout << "(2)Type: " << player2.get_type() << endl;
        cout << "(3)Level: " << player2.get_level() << endl;
        cout << "(4)Health: " << player2.get_health() << endl;
        cout << "(5)Physical Attack: " << player2.get_p_attack() << endl;
        cout << "(6)Magical Attack: " << player2.get_m_attack() << endl;
        cout << "(7)Physical Defence: " << player2.get_p_defence() << endl;
        cout << "(8)Magical Defence: " << player2.get_m_defence() << endl;
        cout << "(9)Speed: " << player2.get_speed() << endl;
        cout << "--------------------------------------------------------"
             << endl;
        while ((cout << "Confirm Your Character. Press 1 to Confirm. Press 0 "
                        "if you want to continuing editing: ") &&
               (!(cin >> valueInput) || valueInput < 0 || valueInput > 1)) {
          cout << "Invalid Input. Input must be between 0-1 inclusive." << endl;
          cin.clear();
          cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if (valueInput == 1) {
          ready2 = "true";
          player2.set_stats(player2.get_level(), player2.get_health(),
                            player2.get_p_attack(), player2.get_m_attack(),
                            player2.get_p_defence(), player2.get_m_defence(),
                            player2.get_speed());
          break;
        }
      }
    } else if (menuInput == 1) {
      player2.set_name();
    } else if (menuInput == 2) {
      player2.set_type();
    } else if (menuInput == 3) {
      while ((cout << "New Level (1-100): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 100)) {
        cout << "Invalid Input. Input must be between 1-100 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player2.set_level(valueInput);
    } else if (menuInput == 4) {
      while ((cout << "New Health Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player2.set_health(valueInput);
    } else if (menuInput == 5) {
      while ((cout << "New Physical Attack Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player2.set_p_attack(valueInput);
    } else if (menuInput == 6) {
      while ((cout << "New Magical Attack Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player2.set_m_attack(valueInput);
    } else if (menuInput == 7) {
      while ((cout << "New Physical Defence Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player2.set_p_defence(valueInput);
    } else if (menuInput == 8) {
      while ((cout << "New Magical Defence Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player2.set_m_defence(valueInput);
    } else if (menuInput == 9) {
      while ((cout << "New Speed Stat (1-250): ") &&
             (!(cin >> valueInput) || valueInput < 1 || valueInput > 250)) {
        cout << "Invalid Input. Input must be between 1-250 inclusive." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      player2.set_speed(valueInput);
    } else if (menuInput == 10) {
      cout << "--------------------------------------------------------"
           << endl;
      cout << "Current Player 1 Character Stats" << endl;
      cout << "(1)Name: " << player2.get_name() << endl;
      cout << "(2)Type: " << player2.get_type() << endl;
      cout << "(3)Level: " << player2.get_level() << endl;
      cout << "(4)Health: " << player2.get_health() << endl;
      cout << "(5)Physical Attack: " << player2.get_p_attack() << endl;
      cout << "(6)Magical Attack: " << player2.get_m_attack() << endl;
      cout << "(7)Physical Defence: " << player2.get_p_defence() << endl;
      cout << "(8)Magical Defence: " << player2.get_m_defence() << endl;
      cout << "(9)Speed: " << player2.get_speed() << endl;
      cout << "--------------------------------------------------------"
           << endl;
    } else {
      cout << "Invalid Input. Input must be between 0-10 inclusive." << endl;
    }
  }
}
