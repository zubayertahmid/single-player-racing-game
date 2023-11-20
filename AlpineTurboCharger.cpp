#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"

// Concrete Strategy - Alpine Turbocharger
class AlpineTurbocharger : public TurbochargerBehavior {
public:
    void turbochargerInfo() const override {
        std::cout << "Alpine Turbocharger" << std::endl;
    }
};
