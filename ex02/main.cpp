/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:01:59 by alel-you          #+#    #+#             */
/*   Updated: 2025/11/11 13:15:55 by alel-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int  main(void)
{
    std::string  Brain = "HI THIS IS BrAIN";       
    std::string& stringREF = Brain;
    std::string  *stringPTR = &Brain;

    std::cout << "(orginal) 🧟‍♂️ : " << Brain << std::endl;
    std::cout << "(REF)     🧟‍♂️ : " << stringREF << std::endl;
    std::cout << "(PTR)     🧟‍♂️ : " << *stringPTR << std::endl;
    std::cout << std::endl;    
    std::cout << "ADDR&(orginal) 🧟‍♂️ : " << &Brain << std::endl;
    std::cout << "ADDR&(REF)     🧟‍♂️ : " << &stringREF << std::endl;
    std::cout << "ADDR&(PTR)     🧟‍♂️ : " << stringPTR << std::endl;
}