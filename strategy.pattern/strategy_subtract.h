#ifndef STRATEGY_SUBTRACT_H
#define STRATEGY_SUBTRACT_H

#include "strategy.h"

class CStrategySubtract : public IStrategy{
    public:
        int doOperation(int, int);
};

#endif
