#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"
#include "Car.h"


Car::Car(EngineBehavior* e, TurbochargerBehavior* t) : engine(e), turbocharger(t) {}

void Car::setEngine(EngineBehavior* e) {
    engine = e;
}

void Car::setTurbocharger(TurbochargerBehavior* t) {
    turbocharger = t;
}

void Car::carInfo() const {
    engine->engineInfo();
    turbocharger->turbochargerInfo();
}
EngineBehavior* Car::getEngine() const {
    return engine;
}