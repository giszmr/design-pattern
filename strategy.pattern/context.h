#ifndef CONTEXT_H
#define CONTEXT_H

#include "strategy.h"

class CContext
{
    public:
        CContext(IStrategy *strategy);//The parameter of the constructor should not be 'reference type of an object'.
        ~CContext();
        int ExecuteStrategy(int, int);
        virtual int Test_ParameterIsReferenceTypeOfAnObject(IStrategy &stategy); //This function should be virtual! Because the parameter is 'reference type of an object'.
    private:
        IStrategy *m_strategy;
};


#endif
