#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"
#include "Car.h"
#include "Track.h"

// Concrete Class - BB Raceway
class BBRaceway : public Track {
public:
    void startLine() const override {
        std::cout << "BB Raceway - Start Line" << std::endl;
    }

    void finishLine() const override {
        std::cout << "BB Raceway - Finish Line" << std::endl;
    }

};




