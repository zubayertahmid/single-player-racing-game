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
#include "TrackFactory.h"
#include "BlueMoonBaySpeedway.cpp"
#include "BBRaceway.cpp"
#include "CircuitDeSpaFrancorchamps.cpp"
#include "NOS.cpp"
#include <iostream>

// Decorator Pattern - PitStop Class
#include "Car.h"
#include "NOS.cpp"

class PitStop : public Car {
private:
    NOS* nos;

public:
    PitStop(EngineBehavior* e, TurbochargerBehavior* t, NOS* n);
    void applyNOS();
};
