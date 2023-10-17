#ifndef PhysicalAttack_H
#define PhysicalAttack_H

#include <iostream>
#include <string>
#include <limits>
#include "Attack.h"

class PhysicalAttack : public Attack {
  int opponent_p_defence; // Variable to store the opponent's physical defense.

 public:
  int damage_calc(); // Calculate damage for physical attacks.
  void set_opponent_p_defence(int para_p_defence); // Set opponent's physical defense.
};

#endif
