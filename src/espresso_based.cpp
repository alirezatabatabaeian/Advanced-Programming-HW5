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
void EspressoBased::brew()
{
    for (size_t i {}; i <= 100; i++) {
        if (ingredients.size() == 3) {
            if (i < 33) {
                if (i == 0) {
                    std::cout << "\033[106m"
                              << "\033[31m" << std::endl;
                }
                for (size_t j {}; j < i; j++) {
                    if (j < i / 2) {
                        std::cout << "*";
                    }
                    if (j == 99) {
                        std::cout << "  " << i << "% of Cappuccino Completed" << std::endl;
                        std::cout << "----------------------------------------"
                                  << "----------------------------------------" << std::endl;
                    } else if (j == i - 1) {
                        std::cout << "  Espresso : " << i << "% of Cappuccino Completed"
                                  << "\r" << std::flush;
                    }
                }
            } else if (i < 66) {
                if (i == 0) {
                    std::cout << "\033[106m"
                              << "\033[31m"
                              << "----------------------------------------"
                              << "----------------------------------------" << std::endl;
                }
                for (size_t j {}; j < i; j++) {
                    if (j < i / 2) {
                        std::cout << "*";
                    }
                    if (j == 99) {
                        std::cout << "  " << i << "% of Cappuccino Completed" << std::endl;
                        std::cout << std::endl;
                    } else if (j == i - 1) {
                        std::cout << "\033[107m"
                                  << "\033[31m"
                                  << "  Milk : " << i << "% of Cappuccino Completed"
                                  << "\r" << std::flush;
                    }
                }
            } else {
                if (i == 0) {
                    std::cout << "\033[106m"
                              << "\033[31m"
                              << "---------------------------------------------"
                              << "--------------------------------------------" << std::endl;
                }
                for (size_t j {}; j < i; j++) {
                    if (j < i / 2) {
                        std::cout << "*";
                    }
                    if (j == 99) {
                        std::cout << "\033[103m"
                                  << "\033[31m"
                                  << "  MilkFoam : " << i << "% of Cappuccino Completed" << std::endl;
                        std::cout << std::endl;
                    } else if (j == i - 1) {
                        std::cout << "\033[103m"
                                  << "\033[31m"
                                  << "  MilkFoam : " << i << "% of Cappuccino Completed"
                                  << "\r" << std::flush;
                    }
                }
            }
        } else if (ingredients.size() == 4) {
            if (i < 25) {
                if (i == 0) {
                    std::cout << "\033[106m"
                              << "\033[31m" << std::endl;
                }
                for (size_t j {}; j < i; j++) {
                    if (j < i / 2) {
                        std::cout << "*";
                    }
                    if (j == 99) {
                        std::cout << "  " << i << "% of Mocha Completed" << std::endl;
                        std::cout << "----------------------------------------"
                                  << "----------------------------------------" << std::endl;
                    } else if (j == i - 1) {
                        std::cout << "  Espresso : " << i << "% of Mocha Completed"
                                  << "\r" << std::flush;
                    }
                }
            } else if (i < 50) {
                if (i == 0) {
                    std::cout << "\033[106m"
                              << "\033[31m"
                              << "----------------------------------------------"
                              << "---------------------------------------------" << std::endl;
                }
                for (size_t j {}; j < i; j++) {
                    if (j < i / 2) {
                        std::cout << "*";
                    }
                    if (j == 99) {
                        std::cout << "\033[102m"
                                  << "\033[31m"
                                  << "  " << i << "% of Mocha Completed" << std::endl;
                        std::cout << "----------------------------------------"
                                  << "----------------------------------------" << std::endl;
                    } else if (j == i - 1) {
                        std::cout << "\033[102m"
                                  << "\033[31m"
                                  << "  Chocolate : " << i << "% of Mocha Completed"
                                  << "\r" << std::flush;
                    }
                }
            } else if (i < 75) {
                if (i == 0) {
                    std::cout << "\033[106m"
                              << "\033[31m"
                              << "----------------------------------------------"
                              << "---------------------------------------------" << std::endl;
                }
                for (size_t j {}; j < i; j++) {
                    if (j < i / 2) {
                        std::cout << "*";
                    }
                    if (j == 99) {
                        std::cout << "\033[107m"
                                  << "\033[31m"
                                  << "  " << i << "% of Mocha Completed" << std::endl;
                        std::cout << "----------------------------------------"
                                  << "----------------------------------------" << std::endl;
                    } else if (j == i - 1) {
                        std::cout << "\033[107m"
                                  << "\033[31m"
                                  << "  Milk : " << i << "% of Mocha Completed"
                                  << "\r" << std::flush;
                    }
                }
            } else {
                if (i == 0) {
                    std::cout << "\033[106m"
                              << "\033[31m"
                              << "----------------------------------------------"
                              << "---------------------------------------------" << std::endl;
                }
                for (size_t j {}; j < i; j++) {
                    if (j < i / 2) {
                        std::cout << "*";
                    }
                    if (j == 99) {
                        std::cout << "\033[103m"
                                  << "\033[31m"
                                  << "  MilkFoam : " << i << "% of Mocha Completed" << std::endl;
                        std::cout << std::endl;
                    } else if (j == i - 1) {
                        std::cout << "\033[103m"
                                  << "\033[31m"
                                  << "  MilkFoam : " << i << "% of Mocha Completed"
                                  << "\r" << std::flush;
                    }
                }
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(70));
    }
}