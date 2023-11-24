#include "CircuitDeSpaFrancorchamps.cpp"
// Concrete Factory - Circuit de Spa-Francorchamps Factory
class CircuitDeSpaFrancorchampsFactory : public TrackFactory {
public:
    Track* createTrack() const override {
        // Use the Template Pattern to create a specific track
        return new CircuitDeSpaFrancorchamps();
    }
};
