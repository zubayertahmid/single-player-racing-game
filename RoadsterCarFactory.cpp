#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"
#include "Car.h"
#include "Track.h"
#include "CarFactory.h"
#include "V6Engine.cpp"
#include "V8Engine.cpp"
#include "AlpineTurbocharger.cpp"
#include "CumminsTurbocharger.cpp"
#include "V12Engine.cpp"
// Concrete Factory - Roadster Car Factory
class RoadsterCarFactory : public CarFactory {
public:
    Car* createCar() const override {
        // Use the Strategy Pattern to create a Roadster car with a specific engine and turbocharger
        return new Car(new V12Engine(), new CumminsTurbocharger());
    }
};