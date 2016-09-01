/* GuestTest.cpp */
#include <iostream>
#include "Guest.hpp"
#include "SpecialGuest.hpp"
using namespace std;

int main(int argc, char* argv[]) {
  Guest* g1Ptr = new Guest;
  Guest* g2Ptr = new Guest;
  Guest* g3Ptr = new SpecialGuest;

  g1Ptr->nNights = 3;
  g1Ptr->phoneBill = 0.00;
  g2Ptr->nNights = 3;
  g2Ptr->phoneBill = 0.00;
  g3Ptr->nNights = 3;
  g3Ptr->phoneBill = 0.00;

  cout << "Bills:\n"
       << "Guest 1: " << g1Ptr->calculateBill() << '\n'
       << "Guest 2: " << g2Ptr->calculateBill() << '\n'
       << "Guest 3: " << g3Ptr->calculateBill() << '\n';

  delete g1Ptr;
  delete g2Ptr;
  delete g3Ptr;
  
  return 0;
}
