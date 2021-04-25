#include <stdio.h>
#include "subject.h"
#include "observer.h"

int CSubject::hello = 10;
int CSubject::GetState()
{
    return m_State;
}

void CSubject::SetState(int state)
{
    m_State = state;
    NotifyAllObservers();
}

void CSubject::Attach(IObserver *observer)
{
    m_Observers.push_back(observer);
}

void CSubject::NotifyAllObservers()
{
    int i = 0;

    list<IObserver*>::iterator iter;
    for ( iter = m_Observers.begin(); iter != m_Observers.end(); iter++)
    {
        (*iter)->Update(m_State);
        i++;
    }
}
