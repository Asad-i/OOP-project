#include "Protect.h"

void Protect::set_accuracy() { accuracy = 100; }
void Protect::protect_move() { 
  if ((rand() & 100) < accuracy - (uses * 2) - (consecutive * 33)){
    uses++;
    consecutive++;
    
  } else {
    cout << "Move Missed!" << endl;
  }
}