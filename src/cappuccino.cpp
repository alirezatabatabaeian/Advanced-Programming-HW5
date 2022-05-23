#include "cappuccino.h"

// #################################### //
Cappuccino::Cappuccino()
    : side_items {}
{
    this->name = "Cappuccino";
    this->ingredients.push_back(new Espresso { 2 });
    this->ingredients.push_back(new Milk { 2 });
    this->ingredients.push_back(new MilkFoam { 1 });
}
// #################################### //
Cappuccino::Cappuccino(const Cappuccino& cap)
    : side_items { cap.side_items }
{
    this->name = cap.name;
    this->ingredients = cap.ingredients;
}
// #################################### //
void Cappuccino::operator=(const Cappuccino& cap)
{
    side_items = cap.side_items;
    this->name = cap.name;
    this->ingredients = cap.ingredients;
}
// #################################### //
// Cappuccino::~Cappuccino()
// {

// }
// #################################### //
double Cappuccino::price()
{
    double _price {};
    for (size_t i {}; i < ingredients.size(); i++) {
        _price += ingredients[i]->price();
    }
    if (!side_items.empty()) {
        for (size_t i {}; i < side_items.size(); i++) {
            _price += side_items[i]->price();
        }
    }
    return _price;
}
// #################################### //
// #################################### //
// #################################### //
