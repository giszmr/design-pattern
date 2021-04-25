#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>
#include "observer.h"

using namespace std;

class CSubject {
    public:
        int  GetState();
        void SetState(int state);
        virtual void Attach(IObserver *observer);
        void NotifyAllObservers();
    private:
        int m_State;
        static int hello;
        list<IObserver*> m_Observers;//member of list must be pointer. So that the list can store pointers of derived classes.l
};


#endif
