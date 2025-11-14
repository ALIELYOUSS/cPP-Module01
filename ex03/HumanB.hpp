#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string Bname;
    Weapon     *gun;

public:
    HumanB(std::string name);
    void    attack();
    void    setWeapon(Weapon& weapon);
};

#endif