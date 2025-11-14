/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:01:04 by alel-you          #+#    #+#             */
/*   Updated: 2025/11/11 12:59:29 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *Walkers = zombieHorde(6,"ali");
    for (size_t i = 0; i < 6; i++)
    {
        Walkers[i].Announce();
    }
    delete[] Walkers;
}
