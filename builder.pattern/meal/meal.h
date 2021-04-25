#ifndef MEAL_H
#define MEAL_H

#include "item.h"
#include <list>

class CMeal {
    public:
        void  AddItem(IItem *item);
        void  ShowItems();
        float GetCost();
    private:
        list<IItem*> m_ItemList; 
};

#endif
