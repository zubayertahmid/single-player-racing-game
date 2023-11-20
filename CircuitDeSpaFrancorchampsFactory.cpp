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
// Concrete Factory - Circuit de Spa-Francorchamps Factory
class CircuitDeSpaFrancorchampsFactory : public TrackFactory {
public:
    Track* createTrack() const override {
        // Use the Template Pattern to create a specific track
        return new CircuitDeSpaFrancorchamps();
    }
};
