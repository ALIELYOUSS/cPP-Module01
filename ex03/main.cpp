#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon club("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon samurai("katana");
        HumanB jim("deku-kun");
        jim.setWeapon(samurai);
        jim.attack();
        samurai.setType("some other type of samurai");
        jim.attack();
    }
    return 0;
}