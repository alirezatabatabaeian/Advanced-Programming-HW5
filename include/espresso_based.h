#ifndef ESPRESSO_BASED_H
#define ESPRESSO_BASED_H
#include "ingredient.h"
#include "sub_ingredients.h"
#include <chrono> // for operator""s, chrono_literals
#include <iostream>
#include <stdlib.h>
#include <string> // for allocator, operator+, char_traits, operator<<, string, to_string, basic_string
#include <thread> // for sleep_for
#include <vector>

class EspressoBased {
public:
    virtual std::string get_name() = 0;
    virtual double price() = 0;

    void brew();
    std::vector<Ingredient*>& get_ingredients() { return ingredients; }

    virtual ~EspressoBased(); // we need to make it virtual

protected:
    EspressoBased();
    EspressoBased(const EspressoBased& esp);
    void operator=(const EspressoBased& esp);

    std::vector<Ingredient*> ingredients;
    std::string name;
};

#endif // ESPRESSO_BASED_H