#include "cappuccino.h"
#include "espresso_based.h"
#include "ingredient.h"
#include "mocha.h"
#include "sub_ingredients.h"
#include <gtest/gtest.h>
#include <iostream>

int main(int argc, char** argv)
{
    if (false) // make false to run unit-tests
    {
        // using namespace ftxui;
        // using namespace std::chrono_literals;

        // std::string reset_position;
        // for (float percentage = 0.0f; percentage <= 1.0f; percentage += 0.002f) {
        //     std::string data_downloaded = std::to_string(int(percentage * 5000)) + "/5000";
        //     auto document = hbox({
        //         text("downloading:"),
        //         gauge(percentage) | flex,
        //         text(" " + data_downloaded),
        //     });
        //     auto screen = Screen(100, 1);
        //     Render(screen, document);
        //     std::cout << reset_position;
        //     screen.Print();
        //     reset_position = screen.ResetPosition();

        //     std::this_thread::sleep_for(0.01s);
        // }
        // std::cout << std::endl;

    } else {
        ::testing::InitGoogleTest(&argc, argv);
        std::cout << "RUNNING TESTS ..." << std::endl;
        int ret { RUN_ALL_TESTS() };
        if (!ret)
            std::cout << "<<<SUCCESS>>>" << std::endl;
        else
            std::cout << "FAILED" << std::endl;
    }
    return 0;
}