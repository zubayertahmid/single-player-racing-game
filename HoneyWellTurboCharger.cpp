#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"

// Concrete Strategy - Honeywell Turbocharger
class HoneywellTurbocharger : public TurbochargerBehavior {
public:
    void turbochargerInfo() const override {
        std::cout << "Honeywell Turbocharger" << std::endl;
    }
};

