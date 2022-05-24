#ifndef SUB_INGREDIENTS_H
#define SUB_INGREDIENTS_H
#include "ingredient.h"

// ******************************************** Challange ********************************************* //

#define DEFCLASS(Ingredient_Name, Price_Per_Unit)       \
                                                        \
    class Ingredient_Name : public Ingredient {         \
    public:                                             \
        Ingredient_Name(size_t units)                   \
            : Ingredient { Price_Per_Unit, units }      \
        {                                               \
            name = #Ingredient_Name;                    \
        }                                               \
        virtual std::string get_name() { return name; } \
    };

DEFCLASS(Cinnamon, 5); // def classes
DEFCLASS(Chocolate, 5);
DEFCLASS(Sugar, 1);
DEFCLASS(Cookie, 10);
DEFCLASS(Espresso, 15);
DEFCLASS(Milk, 10);
DEFCLASS(MilkFoam, 5);
DEFCLASS(Water, 1);

// // ######################################################### // define sub-classes for ingredients of a coffee
// class Cinnamon : public Ingredient {
// public:
//     Cinnamon(size_t units) // constructor
//         : Ingredient { 5, units } // use ingredient constructor
//     {
//         this->name = "Cinnamon"; // set the name variable
//     }

//     virtual std::string get_name() { return this->name; } // a function for return the name(for all classes,
//                                                                                               its the same)
// };
// // ######################################################### //
// class Chocolate : public Ingredient {
// public:
//     Chocolate(size_t units)
//         : Ingredient { 5, units } // use ingredient constructor
//     {
//         this->name = "Chocolate"; // set the name variable
//     }

//     virtual std::string get_name() { return this->name; }
// };
// // ######################################################### //
// class Sugar : public Ingredient {
// public:
//     Sugar(size_t units)
//         : Ingredient { 1, units } // use ingredient constructor
//     {
//         this->name = "Sugar"; // set the name variable
//     }

//     virtual std::string get_name() { return this->name; }
// };
// // ######################################################### //
// class Cookie : public Ingredient {
// public:
//     Cookie(size_t units)
//         : Ingredient { 10, units } // use ingredient constructor
//     {
//         this->name = "Cookie"; // set the name variable
//     }

//     virtual std::string get_name() { return this->name; }
// };
// // ######################################################### //
// class Espresso : public Ingredient {
// public:
//     Espresso(size_t units)
//         : Ingredient { 15, units } // use ingredient constructor
//     {
//         this->name = "Espresso"; // set the name variable
//     }

//     virtual std::string get_name() { return this->name; }
// };
// // ######################################################### //
// class Milk : public Ingredient {
// public:
//     Milk(size_t units)
//         : Ingredient { 10, units } // use ingredient constructor
//     {
//         this->name = "Milk"; // set the name variable
//     }

//     virtual std::string get_name() { return this->name; }
// };
// // ######################################################### //
// class MilkFoam : public Ingredient {
// public:
//     MilkFoam(size_t units)
//         : Ingredient { 5, units } // use ingredient constructor
//     {
//         this->name = "MilkFoam"; // set the name variable
//     }

//     virtual std::string get_name() { return this->name; }
// };
// // ######################################################### //
// class Water : public Ingredient {
// public:
//     Water(size_t units)
//         : Ingredient { 1, units } // use ingredient constructor
//     {
//         this->name = "Water"; // set the name variable
//     }

//     virtual std::string get_name() { return this->name; }
// };
// // ######################################################### //

#endif // SUB_INGREDIENTS_H