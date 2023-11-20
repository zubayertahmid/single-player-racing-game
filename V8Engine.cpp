#include <iostream>
#include "EngineBehaviour.h"

// Concrete Strategy - v8 Engine
class V8Engine : public EngineBehavior {
public:
    void engineInfo() const override {
        std::cout << "V8 Engine" << std::endl;
    }
};