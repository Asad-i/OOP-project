#include "Protect.h"

void Protect::set_accuracy() {
  accuracy = 100; // Set the accuracy for the Protect move to 100.
}

void Protect::protect_move() {
  if ((rand() & 100) < accuracy - (uses * 2) - (consecutive * 33)) {
    uses++; // Increment the uses counter.
    consecutive++; // Increment the consecutive counter.
  } else {
    cout << "Move Missed!" << endl; 
  }
}
