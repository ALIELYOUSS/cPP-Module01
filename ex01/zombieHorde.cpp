/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:05:16 by alel-you          #+#    #+#             */
/*   Updated: 2025/11/11 12:40:45 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 0 || N == 0)
        return nullptr;
    Zombie *Walkers = new Zombie[N];
    if (Walkers == nullptr)
        return nullptr;
    for (int i = 0; i < N; i++)
    {
        Walkers[i].Set_Zombie_Name(name);
    }
    return (Walkers);
}