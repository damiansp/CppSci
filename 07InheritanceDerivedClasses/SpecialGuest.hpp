/* SpecialGuest.hpp */
#ifndef SPECIAL_GUEST_HPP
#define SPECIAL_GUEST_HPP

#include "Guest.hpp"

class SpecialGuest: public Guest {
public:
  double calculateBill();
};

#endif
