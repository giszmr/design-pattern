#include <stdio.h>
#include "../meal/meal_builder.h"
#include "../meal/meal.h"

int main(int argc, char* argv[])
{
    CMealBuilder *mealBuilder = new CMealBuilder();
    
    CMeal vegMeal = mealBuilder->PrepareVegMeal();
    printf("Vegetable Meal:\n");
    vegMeal.ShowItems();

    CMeal nonVegMeal = mealBuilder->PrepareNonVegMeal();
    printf("NonVeg Meal:\n");
    nonVegMeal.ShowItems();

    return 0;
}
