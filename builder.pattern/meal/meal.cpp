#include "meal.h"
#include <stdio.h>
#include <string>

using namespace std;

void CMeal::AddItem(IItem* item)
{
    m_ItemList.push_back(item);
}

void CMeal::ShowItems()
{
   list<IItem*>::iterator iter;
   for ( iter = m_ItemList.begin(); iter != m_ItemList.end(); iter++)
   {
        printf("Item: %-16s, Packing: %-7s, Price: %.1f\n", 
                (*iter)->GetName().c_str(), 
                (*iter)->Packing()->Pack().c_str(), 
                (*iter)->GetPrice());
   }
   
}

float CMeal::GetCost()
{
    float cost = 0.0f;
    list<IItem*>::iterator iter;
    for ( iter = m_ItemList.begin(); iter != m_ItemList.end(); iter++)
    {
        cost += (*iter)->GetPrice();
    }
    
    return cost;
}
