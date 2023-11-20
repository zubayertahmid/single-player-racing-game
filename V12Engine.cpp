#include <iostream>
#include "EngineBehaviour.h"

// Concrete Strategy - v12 Engine
class V12Engine : public EngineBehavior {
public:
    void engineInfo() const override {
        std::cout << "V12 Engine" << std::endl;
    }
};