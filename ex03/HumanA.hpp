#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
    std::string Aname;
    Weapon&     gun;
public:
    void    attack();
    HumanA(std::string name,  Weapon& Weapon_type) : Aname(name), gun(Weapon_type)
    {}
};

#endif