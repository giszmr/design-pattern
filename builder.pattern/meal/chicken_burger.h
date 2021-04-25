#ifndef CHICKEN_BURGER_H
#define CHICKEN_BURGER_H

#include <string>
#include <float.h>
#include "burger.h"

using namespace std;

class CChickenBurger : public IBurger {
    public:
        string GetName();
        float  GetPrice();
};

#endif
