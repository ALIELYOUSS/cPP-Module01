/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:28:25 by alel-you          #+#    #+#             */
/*   Updated: 2025/11/11 12:49:08 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *new_Zombie(std::string name)
{
    Zombie *walker;

    walker = new Zombie;
    walker->Set_Zombie_Name(name);
    return (walker);
}
