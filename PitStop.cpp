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

void PitStop::applyNOS() {
    Car* car = new Car();
    car->setNOS(new NOS());
    car->applyNOS();
}


