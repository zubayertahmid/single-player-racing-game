#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"

#include "CarFactory.h"
#include "V6Engine.cpp"
#include "V8Engine.cpp"
#include "AlpineTurbocharger.cpp"
// Concrete Factory - Coupe Car Factory
class CoupeCarFactory : public CarFactory {
public:
    Car* createCar() const override {
        // Use the Strategy Pattern to create a Coupe car with a specific engine and turbocharger
        return new Car(new V6Engine(), new AlpineTurbocharger());
    }
};
