/* Guest.cpp */
#include "Guest.hpp"

double Guest::calculateBill() {
  return phoneBill + ((double) (nNights)) * 50.00;
}
