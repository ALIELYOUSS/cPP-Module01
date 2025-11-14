#include "Harl.hpp"

void    Harl::complain(std::string level)
{
    void(Harl::*complains[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    std::string complains_lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (level == complains_lvl[i])
        {
            (this->*complains[i])();
            exit(EXIT_SUCCESS);
        }
    }
    std::cout << "Invalid level input" << std::endl;
}
