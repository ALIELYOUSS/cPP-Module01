/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:49:25 by alel-you          #+#    #+#             */
/*   Updated: 2025/11/11 13:00:17 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
    std::string name;
public:
    void        Set_Zombie_Name(std::string name);
    std::string Get_zombie_name();
    void        announce(void);
    ~Zombie(){std::cout << "Constructor killed " << this->name <<std::endl;};
};
Zombie  *new_Zombie(std::string name);
void    randomChump(std::string name);

#endif