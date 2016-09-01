/* AbstractODESolver.hpp */
// Solve ordinary differential equations

#ifndef ABSTRACT_ODE_SOLVER_HPP
#define ABSTRACT_ODE_SOLVER_HPP

class AbstractODESolver {
private:
  double stepSize, initTime, finalTime, intValue;

public:
  void setStepSize(double h);
  void setTimeInterval(double t0, double t1);
  void setInitValue(double y0);
  virtual double rhs(double y, double t) = 0;
  virtual double solve() = 0;
};

#endif
