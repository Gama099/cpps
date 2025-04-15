/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:18:04 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/15 18:18:06 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::add_contact(){
	std::cout << "📝 first name: " << std::endl;
	if(!std::getline(std::cin, firstName))
		exit(1) ;
	std::cout << "🖊️ last name: " << std::endl;
	if(!std::getline(std::cin, lastName))
		exit(1);
	std::cout << "🏷️ nickname: " << std::endl;
	if (!std::getline(std::cin, nickname))
		exit(1);
	std::cout << "📞 phone: " << std::endl;
	if (!std::getline(std::cin, phoneNumber))
		exit(1);
	std::cout << "🤫 secret: " << std::endl;
	if(!std::getline(std::cin, darkestSecret))
		exit(1);
}

void	Contact::display(){
	std::cout << firstName << std::endl;
	std::cout << lastName << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phoneNumber << std::endl;
	std::cout << darkestSecret << std::endl;
}

std::string Contact::getFirstName() {
	return firstName;}

std::string Contact::getLastname() {
	return lastName;}

std::string Contact::getNickname() {
	return nickname;}

std::string Contact::getPhoneNumber() {
	return phoneNumber;}

std::string Contact::getDarkestSecret() {
	return darkestSecret;}
