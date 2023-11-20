#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"
#include "Car.h"
#include "Track.h"

// Concrete Class - Circuit de Spa-Francorchamps
class CircuitDeSpaFrancorchamps : public Track {
public:
    void startLine() const override {
        std::cout << "Circuit de Spa-Francorchamps - Start Line" << std::endl;
    }

    void finishLine() const override {
        std::cout << "Circuit de Spa-Francorchamps - Finish Line" << std::endl;
    }

};