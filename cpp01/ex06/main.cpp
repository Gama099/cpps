/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:45:04 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 23:47:46 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;

    harl.complain("DEBUG");
	std::cout << std::endl;
    harl.complain("INFO");
	std::cout << std::endl;
    harl.complain("WARNING");
	std::cout << std::endl;
    harl.complain("ERROR");
	std::cout << std::endl;
    harl.complain("UNKNOWN");

    return 0;
}
