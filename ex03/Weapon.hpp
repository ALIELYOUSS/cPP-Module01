#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string name){type = name;};
    std::string getType() const{
        return type;
    };
    void        setType(std::string tp){
        type = tp;
    };

};

#endif