#include "PhysicalAttack.h"

PhysicalAttack::PhysicalAttack(){
  accuracy = 100;
  attack_type = type;
  power = 50;
}
int PhysicalAttack::damage_calc(){
  // Calculate the damage using the formula
  damage = ((2 * level) / 5 + 2) * power*(p_attack / opponent_p_defence) / 50 + 2;
  if (attack_type == type){
    damage * 2;
  }
  int consecutive = 0;
  return damage;
}
void PhysicalAttack::set_opponent_p_defence(int para_p_defence){
  opponent_p_defence = para_p_defence;
}
