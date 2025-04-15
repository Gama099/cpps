/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:14:58 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/15 18:15:00 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::add_contact(){
	std::cout << "first name: " << std::endl;
	std::getline(std::cin, firstName);
	std::cout << "last name: " << std::endl;
	std::getline(std::cin, lastName);
	std::cout << "nickname: " << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "📞 phone: " << std::endl;
	std::getline(std::cin, phoneNumber);
	std::cout << "secret: " << std::endl;
	std::getline(std::cin, darkestSecret);
}

void	Contact::display(){
	std::cout << firstName << std::endl;
	std::cout << firstName << std::endl;
	std::cout << lastName << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phoneNumber << std::endl;
	std::cout << darkestSecret << std::endl;
}

std::string Contact::getFirstName() {
return firstName;
}

std::string Contact::getLastname() {
return lastName;
}

std::string Contact::getNickname() {
return nickname;
}

std::string Contact::getPhoneNumber() {
return phoneNumber;
}

std::string Contact::getDarkestSecret() {
return darkestSecret;
}
