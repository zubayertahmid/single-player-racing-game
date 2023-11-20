#include <iostream>
#include "EngineBehaviour.h" 

// Concrete Strategy - v6 Engine
class V6Engine : public EngineBehavior {
public:
    void engineInfo() const override {
        std::cout << "V6 Engine" << std::endl;
    }
};
