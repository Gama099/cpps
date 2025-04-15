/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:14:45 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/15 18:14:45 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av){
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else{
        // for (int i = 1; i < ac; i++){
        //     for (char *iter = &av[i][0]; *iter; iter++){
        //         std::cout << (char)toupper(*iter);
        //     }
        //     std::cout << " ";
        // }
		for (int i = 1; i < ac; i++){
			std::string line(av[i]);
			for(size_t j = 0; j < line.length(); j++){
				std::cout << (char)std::toupper(line[j]);
			}
			std::cout << " ";
		}
    }
    std::cout << std::endl;
}
