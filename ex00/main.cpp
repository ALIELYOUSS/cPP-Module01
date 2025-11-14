/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:51:13 by alel-you          #+#    #+#             */
/*   Updated: 2025/11/11 12:51:54 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string zname;

    std::cout << "enter a zombie name 🧟‍♂️ ::";
    std::cin >> zname;
    if (std::cin.fail())
    {
        std::cout << "Something went wrong🧟" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout << std::endl;
    randomChump(zname);
}