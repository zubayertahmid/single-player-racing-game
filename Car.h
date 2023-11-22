#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"
// Context - Car Class using the Strategy Pattern
#ifndef CAR_H
#define CAR_H

#include "EngineBehavior.h"
#include "TurbochargerBehavior.h"

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

#endif // CAR_H
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

