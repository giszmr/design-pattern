#include "meal_builder.h"
#include "meal.h"
#include "vegetable_burger.h"
#include "chicken_burger.h"
#include "coke.h"
#include "pepsi.h"

CMeal CMealBuilder::PrepareVegMeal()
{
    CMeal meal;
    meal.AddItem(new CChickenBurger());
    meal.AddItem(new CCoke());
    return meal;
}

CMeal CMealBuilder::PrepareNonVegMeal()
{
    CMeal meal;
    meal.AddItem(new CVegetableBurger());
    meal.AddItem(new CPepsi());
    return meal;
}

