#ifndef MagicalAttack_H
#define MagicalAttack_H

#include <iostream>
#include <string>
#include <limits>
#include "Attack.h"

class MagicalAttack : public Attack {
  // Member variable to store the opponent's magical defense
  int opponent_m_defence;

 public:
  // Function to calculate the damage
  int damage_calc();

  // Function to set the opponent's magical defense
  void set_opponent_m_defence(int para_m_defence);
};

#endif
