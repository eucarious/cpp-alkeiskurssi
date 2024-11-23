#include <iostream>

class Laskutoimitus {
  public:
  virtual double laske(double x, double y) = 0;
};

class Yhteenlasku : public Laskutoimitus {
  double laske(double x, double y) {
    return (x+y);
  }
};

class Kertolasku : public Laskutoimitus {
  double laske(double x, double y) {
    return (x*y);
  }
};

int main () {

  Laskutoimitus *Pointer = 0;
  Pointer =  new Yhteenlasku();
  std::cout << Pointer->laske(10,50) << std::endl;
  Pointer = new Kertolasku();
  std::cout << Pointer->laske(10, 50);

  return 0;
}