#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"
// Context - Car Class using the Strategy Pattern
class Car {
private:
    EngineBehavior* engine;
    TurbochargerBehavior* turbocharger;

public:
    Car(EngineBehavior* e, TurbochargerBehavior* t) : engine(e), turbocharger(t) {}

    void setEngine(EngineBehavior* e);

    void setTurbocharger(TurbochargerBehavior* t);

    void carInfo() const;
    EngineBehavior* getEngine() const;

};

