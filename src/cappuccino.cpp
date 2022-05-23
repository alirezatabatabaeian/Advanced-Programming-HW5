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
{
    this->name = cap.name;

    for (size_t i {}; i < cap.ingredients.size(); i++) {
        std::string _name { cap.ingredients[i]->get_name() };
        size_t _units { cap.ingredients[i]->get_units() };

        if (_name == "Cinnamon")
            this->ingredients.push_back(new Cinnamon { _units });
        else if (_name == "Chocolate")
            this->ingredients.push_back(new Chocolate { _units });
        else if (_name == "Sugar")
            this->ingredients.push_back(new Sugar { _units });
        else if (_name == "Cookie")
            this->ingredients.push_back(new Cookie { _units });
        else if (_name == "Espresso")
            this->ingredients.push_back(new Espresso { _units });
        else if (_name == "Milk")
            this->ingredients.push_back(new Milk { _units });
        else if (_name == "MilkFoam")
            this->ingredients.push_back(new MilkFoam { _units });
        else if (_name == "Water")
            this->ingredients.push_back(new Water { _units });
    }

    for (size_t i {}; i < cap.side_items.size(); i++) {
        std::string _name { cap.side_items[i]->get_name() };
        size_t _units { cap.side_items[i]->get_units() };

        if (_name == "Cinnamon")
            this->side_items.push_back(new Cinnamon { _units });
        else if (_name == "Chocolate")
            this->side_items.push_back(new Chocolate { _units });
        else if (_name == "Sugar")
            this->side_items.push_back(new Sugar { _units });
        else if (_name == "Cookie")
            this->side_items.push_back(new Cookie { _units });
        else if (_name == "Espresso")
            this->side_items.push_back(new Espresso { _units });
        else if (_name == "Milk")
            this->side_items.push_back(new Milk { _units });
        else if (_name == "MilkFoam")
            this->side_items.push_back(new MilkFoam { _units });
        else if (_name == "Water")
            this->side_items.push_back(new Water { _units });
    }
}
// #################################### //
void Cappuccino::operator=(const Cappuccino& cap)
{
    if (this != &cap) {

        this->name = cap.name;

        for (const auto& i : ingredients)
            delete i;
        ingredients.clear();

        for (size_t i {}; i < cap.ingredients.size(); i++) {
            std::string _name { cap.ingredients[i]->get_name() };
            size_t _units { cap.ingredients[i]->get_units() };

            if (_name == "Cinnamon")
                this->ingredients.push_back(new Cinnamon { _units });
            else if (_name == "Chocolate")
                this->ingredients.push_back(new Chocolate { _units });
            else if (_name == "Sugar")
                this->ingredients.push_back(new Sugar { _units });
            else if (_name == "Cookie")
                this->ingredients.push_back(new Cookie { _units });
            else if (_name == "Espresso")
                this->ingredients.push_back(new Espresso { _units });
            else if (_name == "Milk")
                this->ingredients.push_back(new Milk { _units });
            else if (_name == "MilkFoam")
                this->ingredients.push_back(new MilkFoam { _units });
            else if (_name == "Water")
                this->ingredients.push_back(new Water { _units });
        }

        for (const auto& i : side_items)
            delete i;
        side_items.clear();

        for (size_t i {}; i < cap.side_items.size(); i++) {
            std::string _name { cap.side_items[i]->get_name() };
            size_t _units { cap.side_items[i]->get_units() };

            if (_name == "Cinnamon")
                this->side_items.push_back(new Cinnamon { _units });
            else if (_name == "Chocolate")
                this->side_items.push_back(new Chocolate { _units });
            else if (_name == "Sugar")
                this->side_items.push_back(new Sugar { _units });
            else if (_name == "Cookie")
                this->side_items.push_back(new Cookie { _units });
            else if (_name == "Espresso")
                this->side_items.push_back(new Espresso { _units });
            else if (_name == "Milk")
                this->side_items.push_back(new Milk { _units });
            else if (_name == "MilkFoam")
                this->side_items.push_back(new MilkFoam { _units });
            else if (_name == "Water")
                this->side_items.push_back(new Water { _units });
        }
    }
}
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
Cappuccino::~Cappuccino()
{
    for (const auto& i : side_items)
        delete i;
    side_items.clear();
}
// #################################### //