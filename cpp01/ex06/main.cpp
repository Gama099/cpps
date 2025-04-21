/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:45:04 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/21 18:20:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av){
    if (ac != 2){
        std::cout << "Usage: " << av[0] << " <level>" << std::endl;
        return 1;
    }
    Harl harl;
    harl.complain(av[1]);
    return (0);
}

