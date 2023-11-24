#include <iostream>
#include "EngineBehaviour.h"
#include "Car.h"
#ifndef TRACK_FACTORY_H
#define TRACK_FACTORY_H
#include "Track.h"
#include "CarFactory.h"
#include "V6Engine.cpp"
#include "V8Engine.cpp"
#include "AlpineTurbocharger.cpp"
#include "CumminsTurbocharger.cpp"
#include "V12Engine.cpp"
// Abstract Factory Pattern - Track Factory
class TrackFactory {
public:
    virtual Track* createTrack() const = 0;
};
#endif