
#include "Track.h"
// Concrete Class - Blue Moon Bay Speedway
class BlueMoonBaySpeedway : public Track {
public:
    void startLine() const override {
        std::cout << "Blue Moon Bay Speedway - Start Line" << std::endl;
    }

    void finishLine() const override {
        std::cout << "Blue Moon Bay Speedway - Finish Line" << std::endl;
    }

};
