#ifndef STRATEGY_ADD_H
#define STRATEGY_ADD_H

#include "strategy.h"

class CStrategyAdd : public IStrategy{
    public:
        int doOperation(int, int);
};

#endif
