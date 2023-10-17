#ifndef MagicalAttack_H
#define MagicalAttack_H
#include <iostream>
#include <string>
#include <limits>
#include "Attack.h"

class MagicalAttack: public Attack {
  int opponent_m_defence;
 public:
  int damage_calc();
  void set_opponent_m_defence(int para_m_defence);
};
#endif