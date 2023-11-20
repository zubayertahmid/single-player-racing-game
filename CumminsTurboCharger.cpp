#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"

// Concrete Strategy - Cummins Turbocharger
class CumminsTurbocharger : public TurbochargerBehavior {
public:
    void turbochargerInfo() const override {
        std::cout << "Cummins Turbocharger" << std::endl;
    }
};

