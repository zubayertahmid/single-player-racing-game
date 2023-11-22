#include <iostream>
#include <cstdlib> // for rand()
#include <ctime>   // for time()
#include "CarFactory.h"
#include "TrackFactory.h"
#include "Player.h"
#include "Car.h"
#include "Track.h"
#include "CoupeCarFactory.cpp"
#include "BlueMoonBaySpeedwayFactory.cpp"
#include "BBRacewayFactory.cpp"
#include "CircuitDeSpaFrancorchampsFactory.cpp"


// Helper function to generate random lap time
std::string generateRandomLapTime() {
    srand(static_cast<unsigned>(time(0)));
    int hours = rand() % 24;
    int minutes = rand() % 60;
    int seconds = rand() % 60;

    return std::to_string(hours) + "::" + std::to_string(minutes) + "::" + std::to_string(seconds);
}

int main() {
    Player* player = Player::getInstance();

    CarFactory* carFactory;
    TrackFactory* trackFactory;

    carFactory = new CoupeCarFactory();
    trackFactory = new BlueMoonBaySpeedwayFactory();

    Car* playerCar = carFactory->createCar();
    Track* playerTrack = trackFactory->createTrack();

    playerCar->carInfo();
    playerTrack->raceInfo();

    Race* race = new Race(car, track);
    race->race();
    
    std::cout << "Lap Time: " << generateRandomLapTime() << std::endl;

    delete playerCar;
    delete playerTrack;
    delete carFactory;
    delete trackFactory;
    delete race;

    return 0;
}
