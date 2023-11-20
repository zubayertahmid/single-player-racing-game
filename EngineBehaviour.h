#include <iostream>

// Strategy Interface
class EngineBehavior {
public:
    virtual void engineInfo() const = 0;
};