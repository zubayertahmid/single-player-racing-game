#include <iostream>
#ifndef ENGINE_BEHAVIOR_H
#define ENGINE_BEHAVIOR_H
// Strategy Interface
class EngineBehavior {
public:
    virtual void engineInfo() const = 0;
};

#endif
