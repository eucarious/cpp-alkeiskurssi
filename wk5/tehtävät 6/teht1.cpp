#include "vehicles.h"

int main() {

  Vehicle someVehicle(6, 10, 2024);
  Car someCar(180, 1400, 2008, 4, 4);
  PersonalCar somePersonalCar(180, 1500, 2021, 4, 4, 5);
  Truck someTruck(100, 18000, 2011, 2, 6, 9000);
  Plane somePlane(840, 41140, 2023, 12000);
  Ship someShip(40, 160000, 2015, 10);

  return 0;
}