#ifndef MOCHA_H
#define MOCHA_H
#include "espresso_based.h"
#include "ingredient.h"
#include "sub_ingredients.h"

class Mocha : public EspressoBased {
public:
    Mocha(); // default constructor
    Mocha(const Mocha& moc); // copy constructor
    virtual ~Mocha(); // destructor
    void operator=(const Mocha& moc); // equal operator

    virtual std::string get_name() { return this->name; } // return the name of class
    virtual double price(); // calculate the price of a mocha

    void add_side_item(Ingredient* side) { side_items.push_back(side); } // add side items to vector
    std::vector<Ingredient*>& get_side_items() { return side_items; }

private:
    std::vector<Ingredient*> side_items;
};
#endif // MOCHA_H