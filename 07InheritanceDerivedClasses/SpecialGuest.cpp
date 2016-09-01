/* SpecialGuest.cpp */
#include "SpecialGuest.hpp"

double SpecialGuest::calculateBill() {
  return 45.0 + ((double) (nNights - 1)) * 40.00;
}

  
