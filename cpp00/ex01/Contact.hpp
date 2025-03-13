#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string nickname;
		std::string	phoneNumber;
		std::string darkestSecret;
	public:
	void	add_contact()
	{
		std::cout << "first name: " << std::endl;
		getline(std::cin, firstName);
		std::cout << "last name: " << std::endl;
		getline(std::cin, lastName);
		std::cout << "nickname: " << std::endl;
		getline(std::cin, nickname);
		std::cout << "phone: " << std::endl;
		getline(std::cin, phoneNumber);
		std::cout << "secret: " << std::endl;
		getline(std::cin, darkestSecret);
	}
	//constructor
	Contact(){
		firstName = lastName = nickname = phoneNumber = darkestSecret = "N/A";
	}
	void	display(){
		std::cout << &firstName << std::endl;
		std::cout << firstName << std::endl;
		std::cout << lastName << std::endl;
		std::cout << nickname << std::endl;
		std::cout << phoneNumber << std::endl;
		std::cout << darkestSecret << std::endl;
	}
};

#endif
