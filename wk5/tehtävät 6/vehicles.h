class Vehicle {
  private:
    int _maxSpeed;
    int _weight;
    int _commissioningYear; // käyttöönottovuosi

  public:
    Vehicle(int maxSpd, int weight, int commissioningYear) {
      this->_maxSpeed = maxSpd;
      this->_weight = weight;
      this->_commissioningYear = commissioningYear;
    }
    
    int GetMaxSpeed() const {
      return this->_maxSpeed;
    }

    int GetWeight() const {
      return this->_weight;
    }

    int GetCommissioningYear() const {
      return this->_commissioningYear;
    }
};


class Car : public Vehicle {
  int _totalDoors;
  int _totalWheels;

  public:
    Car(int maxSpd, int weight, int commissioningYear, int totalDoors, int totalWheels) : Vehicle(maxSpd, weight, commissioningYear), _totalDoors(totalDoors), _totalWheels(totalWheels) {};

    int GetTotalDoors() const {
      return this->_totalDoors;
    }

    int GetTotalWheels() const {
      return this->_totalWheels;
    }
};

class PersonalCar : public Car {
  int _maxPassengers;

  public: 
    PersonalCar(int maxSpd, int weight, int commissioningYear, int totalDoors, int totalWheels, int maxPassengers) : Car (maxSpd, weight, commissioningYear, totalDoors, totalWheels), _maxPassengers(maxPassengers) {}

    int GetMaxPassengers() const {
      return this->_maxPassengers;
    }
};

class Truck : public Car {
  int _maxCarryWeight;

  public:
    Truck(int maxSpd, int weight, int commissioningYear, int totalDoors, int totalWheels, int maxCarryWeight) : Car (maxSpd, weight, commissioningYear, totalDoors, totalWheels), _maxCarryWeight(maxCarryWeight) {}

    int GetCarryWeight() const {
      return this->_maxCarryWeight;
    }
};


class Plane : public Vehicle {
  int _maxAltitude;

  public:
    Plane(int maxSpd, int weight, int commissioningYear, int maxAltitude) : Vehicle(maxSpd, weight, commissioningYear), _maxAltitude(maxAltitude) {};

    int GetMaxAltitude() const {
      return this->_maxAltitude;
    }
};


class Ship : public Vehicle {
  int _maxDepth;

  public:
    Ship(int maxSpd, int weight, int commissioningYear, int maxDepth) : Vehicle(maxSpd, weight, commissioningYear), _maxDepth(maxDepth) {};

    int GetMaxDepth() const {
      return this->_maxDepth;
    }
};