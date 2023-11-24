#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"
#include "Car.h"
#include "Track.h"
#include "CarFactory.h"
#include "V6Engine.cpp"
#include "V8Engine.cpp"
#include "AlpineTurbocharger.cpp"
#include "CumminsTurboCharger.cpp"
#include "V12Engine.cpp"
#include "TrackFactory.h"
#include "BlueMoonBaySpeedway.cpp"

// Concrete Factory - Blue Moon Bay Speedway Factory
class BlueMoonBaySpeedwayFactory : public TrackFactory {
public:
    Track* createTrack() const override {
        // Use the Template Pattern to create a specific track
        return new BlueMoonBaySpeedway();
    }
};