/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:13:02 by alel-you          #+#    #+#             */
/*   Updated: 2025/11/13 15:12:41 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon& weapon){
    gun = &weapon;
}

HumanB::HumanB(std::string name){
    Bname = name;
}

void    HumanB::attack(){
    if (gun)
        std::cout << Bname << ": attacks with their " << (*gun).getType() << std::endl;   
    else
        std::cout << Bname << ":    does not have a weapon " << std::endl;
}