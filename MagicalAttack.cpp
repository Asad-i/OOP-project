#include "MagicalAttack.h"

MagicalAttack::MagicalAttack() {
  accuracy = 100;
  attack_type = type;
  power = 50;
}
int MagicalAttack::damage_calc(){
  // Calculate the damage using the formula
  damage = ((2 * level) / 5 + 2) * power*(m_attack / opponent_m_defence) / 50 + 2;
  if (attack_type == type){
    damage * 2;
  }
  int consecutive = 0;
  return damage;
}
void MagicalAttack::set_opponent_m_defence(int para_p_defence){
  opponent_m_defence = para_p_defence;
  int consecutive = 0;
}
