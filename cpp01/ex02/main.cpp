/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:27:22 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 22:27:46 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

int main() {

    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address of str: " << &str << std::endl;
    std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Address held by stringREF: " << &stringREF << std::endl;

    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value referred to by stringREF: " << stringREF << std::endl;

    return 0;
}
