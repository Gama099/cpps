/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:18:04 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/16 20:11:44 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::add_contact(){
	setFirstName();
	setLastName();
	setNickname();
	setPhoneNumber();
	setDarkestSecret();
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

void Contact::setFirstName(){

	firstName = "";
	while((!firstName.length())){
		std::cout << "📝 first name: " << std::endl;
		if(!std::getline(std::cin, firstName))
			exit(1) ;
		if (!firstName.length())
			std::cout << "Provide correct input!!" << std::endl;
		else if (firstName.length() > 0 && firstName != "N/A")
			break;
	}
}

	void Contact::setLastName(){
		lastName = "";
		while(!lastName.length()){
			std::cout << "🖊️ last name: " << std::endl;
			if(!std::getline(std::cin, lastName))
				exit(1);
			if (!lastName.length())
				std::cout << "Provide correct input!!" << std::endl;
		}
	}

	void Contact::setNickname(){
		nickname = "";
		while(!nickname.length()){
			std::cout << "🏷️ nickname: " << std::endl;
			if(!std::getline(std::cin, nickname))
				exit(1);
			if (!nickname.length())
				std::cout << "Provide correct input!!" << std::endl;
		}
	}

	void Contact::setPhoneNumber(){
		phoneNumber = "";
		while(!phoneNumber.length())
		{
			std::cout << "📞 phone: " << std::endl;
			if(!std::getline(std::cin, phoneNumber))
				exit(1);
			if (!phoneNumber.length())
				std::cout << "Provide correct input!!" << std::endl;
			else
			{
				for (size_t i = 0; i < phoneNumber.length(); i++)
				{
					std::cout <<  phoneNumber[i] << std::endl;
					if (!std::isdigit(phoneNumber[i])){
						std::cout << "Provide correct input!!" << std::endl;
						phoneNumber = "";
						break ;
					}
				}

			}
		}
	}

	void Contact::setDarkestSecret(){
		darkestSecret = "";
		while(darkestSecret == "N/A" || !darkestSecret.length()){
			std::cout << "🤫 secret: " << std::endl;
			if(!std::getline(std::cin, darkestSecret))
				exit(1);
			if (!darkestSecret.length())
				std::cout << "Provide correct input!!" << std::endl;
		}
	}
