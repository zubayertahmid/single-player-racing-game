// Race.cpp

#include "Race.h"
#include <iostream>

Race::Race(Car* car, Track* track) : raceCar(car), raceTrack(track) {}

void Race::race() {
    std::cout << "Starting the race!" << std::endl;

    // Generalized steps of the race
    raceCar->carInfo();
    raceTrack->raceInfo();
    // ... other race steps ...

    std::cout << "Race completed!" << std::endl;
}
