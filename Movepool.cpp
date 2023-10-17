#include "Movepool.h"

void Movepool::set_size(int para_size) { size = para_size; }
Movepool::Movepool() { 
  vector<Moves> Move_Set;
  PhysicalAttack Physical = PhysicalAttack();
  MagicalAttack Magical = MagicalAttack();
  Protect Protection = Protect();
  Status Attack_Increase = Status();
  Move_Set.push_back(Physical);
  Move_Set.push_back(Magical);
  Move_Set.push_back(Protection);
  Move_Set.push_back(Attack_Increase);
}
Movepool::~Movepool() { Move_Set.clear(); }