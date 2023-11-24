// Concrete Strategy - Cummins Turbocharger
#ifndef CUMMINS_TURBOCHARGER_H
#define CUMMINS_TURBOCHARGER_H
class CumminsTurboCharger : public TurbochargerBehavior {
public:
    void turbochargerInfo() const override {
        std::cout << "Cummins Turbocharger" << std::endl;
    }
};

#endif

