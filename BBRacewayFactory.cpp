
#include "BBRaceway.cpp"
#ifndef BB_RACEWAY_FACTORY_H
#define BB_RACEWAY_FACTORY_H
// Concrete Factory - BB Raceway Factory
class BBRacewayFactory : public TrackFactory {
public:
    Track* createTrack() const override {
        // Use the Template Pattern to create a specific track
        return new BBRaceway();
    }
};
#endif 