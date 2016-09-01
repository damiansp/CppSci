/* Guest.hpp */
#ifndef GUEST_HPP
#define GUEST_HPP

#include <string>
using namespace std;

class Guest {
public:
  string name, roomType, arrivalDate;
  int nNights;
  double phoneBill;

  virtual double calculateBill();
};

#endif
