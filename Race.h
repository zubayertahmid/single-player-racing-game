// Race.h

#ifndef RACE_H
#define RACE_H

#include "Car.h"
#include "Track.h"

class Race {
public:
    Race(Car* car, Track* track);
    void race();

private:
    Car* raceCar;
    Track* raceTrack;
};

#endif
