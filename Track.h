#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"
#include "Car.h"

// Template Method Pattern - Track Class
class Track {
public:
    // Template method with steps common to all tracks
    void raceInfo() const {
        startLine();
        finishLine();
    }

    virtual void startLine() const = 0;
    virtual void finishLine() const = 0;

};