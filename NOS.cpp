#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"
#include "Car.h"
// Context - NOS (Nitrous Oxide System) Class using the Strategy Pattern
class NOS : public EngineBehavior {
public:
    void engineInfo() const override {
        std::cout << "NOS Engine" << std::endl;
    }
};

// Note: NOS inherits from EngineBehavior, as per the assumption that children of the Car class
// only show the car information, and the parent class Car has engine and turbocharger behavior.
