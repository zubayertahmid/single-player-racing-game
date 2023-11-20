#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"
#include "Car.h"
#include "Track.h"
// Abstract Factory Pattern - Car Factory
class CarFactory {
public:
    virtual Car* createCar() const = 0;
};