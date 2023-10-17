#ifndef Movepool_H
#define Movepool_H
#include <vector>
#include "Moves.h"
#include "Attack.h"
#include "PhysicalAttack.h"
#include "MagicalAttack.h"
#include "Protect.h"
#include "Status.h"

class Movepool: public PhysicalAttack, MagicalAttack, Attack, Status, Protect, Moves {
 private:
  int size;
  vector<Moves> Move_Set;
 public:
  void set_size(int para_size);
  Movepool();
  Moves get_Move_Set();
  ~Movepool();
};

#endif