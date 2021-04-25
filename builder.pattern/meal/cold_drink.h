#ifndef COLD_DRINK_H
#define COLD_DRINK_H

#include <string>
#include "pack.h"
#include "bottle.h"
#include "item.h"

using namespace std;

class IColdDrink : public IItem {
    public:
        IPacking* Packing()
        {
            return new CBottle();
        }
};

#endif
