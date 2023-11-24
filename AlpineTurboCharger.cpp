#include "TurboChargerBehaviour.h"
#ifndef TURBOCHARGER_BEHAVIOUR_H
#define TURBOCHARGER_BEHAVIOUR_H
// Concrete Strategy - Alpine Turbocharger
class AlpineTurbocharger : public TurbochargerBehavior {
public:
    void turbochargerInfo() const override {
        std::cout << "Alpine Turbocharger" << std::endl;
    }
};
#endif 
