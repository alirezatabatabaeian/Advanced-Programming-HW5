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
    , ingredients { esp.ingredients }
{
}
// #################################### //
void EspressoBased::operator=(const EspressoBased& esp)
{
    if (this != &esp) {
        name = esp.name;
        ingredients = esp.ingredients;
    }
}
// #################################### //
EspressoBased::~EspressoBased()
{
    for (const auto& i : ingredients)
        delete i;
    ingredients.clear();

    // for (const auto& i : this->side_items)
    //     delete i;
    // side_items.clear();

    std::cout << "EspressoBased Destructor" << std::endl;
}
// #################################### //