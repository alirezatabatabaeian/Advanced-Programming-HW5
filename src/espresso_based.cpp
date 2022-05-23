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
    name = esp.name;
    ingredients = esp.ingredients;
}
// #################################### //
// EspressoBased::~EspressoBased()
// {
//     for (const auto& i : ingredients)
//         delete i;
//     ingredients.clear();
// }
// #################################### //