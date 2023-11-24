#include <iostream>
#include "EngineBehaviour.h"
#include "TurboChargerBehaviour.h"
#include "Car.h"
#ifndef TRACK_H
#define TRACK_H
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
#endif