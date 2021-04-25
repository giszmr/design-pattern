#ifndef PEPSI_H
#define PEPSI_H

#include <string>
#include <float.h>
#include "cold_drink.h"

using namespace std;

class CPepsi : public IColdDrink {
    public:
        string GetName();
        float  GetPrice();
};


#endif
