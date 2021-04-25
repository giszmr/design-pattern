#include <stdio.h>
#include "strategy.h"
#include "strategy_add.h"
#include "strategy_subtract.h"
#include "strategy_multiply.h"
#include "context.h"

int main(int argc, char* argv[])
{
    CContext *context = new CContext(new CStrategyAdd);
    printf("5 + 1 = %d\n", context->ExecuteStrategy(5, 1));

    context = new CContext(new CStrategySubtract);
    printf("5 - 6 = %d\n", context->ExecuteStrategy(5, 6));

    context = new CContext(new CStrategyMultiply);
    printf("5 * 9 = %d\n", context->ExecuteStrategy(5, 9));


    CStrategyAdd strategyAdd;
    //IStrategy &strategy = strategyAdd;
    printf("1 + 3 = %d\n", context->Test_ParameterIsReferenceTypeOfAnObject(strategyAdd));

    delete context;

    return 0;
}
