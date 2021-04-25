#ifndef VEGETABLE_BURGER_H
#define VEGETABLE_BURGER_H

#include <string>
#include <float.h>
#include "burger.h"

using namespace std;


class CVegetableBurger : public IBurger {
    public:
        string GetName();
        float  GetPrice();
};


#endif
