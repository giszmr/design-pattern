#ifndef STRATEGY_MULTIPLY_H
#define STRATEGY_MULTIPLY_H

#include "strategy.h"

class CStrategyMultiply : public IStrategy{
    public:
        int doOperation(int, int);
};

#endif
