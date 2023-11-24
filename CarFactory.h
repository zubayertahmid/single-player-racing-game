#include "Car.h"
#include "Track.h"
// Abstract Factory Pattern - Car Factory
#ifndef CAR_FACTORY_H
#define CAR_FACTORY_H
class CarFactory {
public:
    virtual Car* createCar() const = 0;
};
#endif