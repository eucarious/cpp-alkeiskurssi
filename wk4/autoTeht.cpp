#include <string>
#include <iostream>

#include <chrono>
#include <random>

#include <vector>


class Car {

    private:
    std::string regNum;
    int maxSpeed;
    int currentSpeed;
    int totalDistance;

    public: 
    Car(std::string registrationNumber, int maxSpd)
    {
        this->regNum = registrationNumber;
        this->maxSpeed = maxSpd;
        this->currentSpeed = 0;
        this->totalDistance = 0;
    }

    void print(){
        std::cout << this->regNum << "\n" << this->maxSpeed << "km/h\n" << this->currentSpeed << "km/h\n" << this->totalDistance << "km\n\n";
    }

    void printSpeed(){
        std::cout << this->currentSpeed << "km/h\n";
    }

    void accelerate(int amount) {
        this->currentSpeed += amount;
        if (this->currentSpeed > this->maxSpeed)
            this->currentSpeed = this->maxSpeed;
        

        if (this->currentSpeed < 0)
            this->currentSpeed = 0;
    }

    void drive(double hours) {
        this->totalDistance += (int) (this->currentSpeed * hours);
    }

    int getDistance() {
        return this->totalDistance;
    }

};

int main () {

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::minstd_rand0 generator (seed); 
    
    std::vector<Car> racers = {};

    for (int i = 0 ; i < 10 ; i++)
    {
        Car newCar("ABC-"+std::to_string(i+1), (generator() % 100 + 100));
        generator.discard(10);
        racers.push_back(newCar);
    }
    bool racing = true;
    while (racing) {
        for (int i = 0 ; i < 10 ; i++)
        {   
            racers[i].accelerate((generator() % 25 - 10));
            racers[i].drive(1);

            generator.discard(10);
        }   

        for (int i = 0 ; i < 10 ; i++)
        {   
            if (racers[i].getDistance() > 10000)
                racing = false;
        }       
    }

    for (int i = 0 ; i < 10 ; i++)
        {   
            racers[i].print();
        }    

    return 0;
}
