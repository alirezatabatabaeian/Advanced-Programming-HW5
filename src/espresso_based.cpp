#include "espresso_based.h"

// #################################### //
EspressoBased::EspressoBased()
    : name {}
    , ingredients {}
{
}
// #################################### //
EspressoBased::EspressoBased(const EspressoBased& esp)
    : name { esp.name }
{

    for (const auto& i : ingredients)
        delete i;
    ingredients.clear();

    for (size_t i {}; i < esp.ingredients.size(); i++) {
        std::string _name { esp.ingredients[i]->get_name() };
        size_t _units { esp.ingredients[i]->get_units() };

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
}
// #################################### //
void EspressoBased::operator=(const EspressoBased& esp)
{
    if (this != &esp) {
        name = esp.name;

        for (const auto& i : ingredients)
            delete i;
        ingredients.clear();

        for (size_t i {}; i < esp.ingredients.size(); i++) {
            std::string _name { esp.ingredients[i]->get_name() };
            size_t _units { esp.ingredients[i]->get_units() };

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
    }
}
// #################################### //
EspressoBased::~EspressoBased()
{
    for (const auto& i : ingredients)
        delete i;
    ingredients.clear();
}
// #################################### //