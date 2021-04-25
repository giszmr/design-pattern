#include "context.h"
#include <stdio.h>

CContext::CContext(IStrategy *strategy)
    : m_strategy(strategy)
{
}

CContext::~CContext()
{
    delete m_strategy;
    m_strategy = NULL;
}

int CContext::ExecuteStrategy(int num1, int num2)
{
    if ( m_strategy != NULL)
        return m_strategy->doOperation(num1, num2);
}

int CContext::Test_ParameterIsReferenceTypeOfAnObject(IStrategy &strategy)
{
    strategy.doOperation(1, 3);
}
