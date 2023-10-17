#include "MagicalAttack.h"

int MagicalAttack::damage_calc() {
  if ((rand() & 100) < accuracy) {
    // Calculate the damage using the formula
    damage = ((2 * level) / 5 + 2) * power * (m_attack / opponent_m_defence) / 50 + 2;
    int consecutive = 0; 
  } else {
    cout << "Move Missed!" << endl;
  }
}

void MagicalAttack::set_opponent_m_defence(int para_m_defence) {
  opponent_m_defence = para_m_defence;
  int consecutive = 0; 
}
