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
		Contact(){
			firstName = "N/A";
			lastName = "N/A";
			nickname = "N/A";
			phoneNumber = "N/A";
			darkestSecret = "N/A";
		}
		void	add_contact();
		void	display();

		//Getters
		std::string	getFirstName();
		std::string	getLastname();
		std::string	getNickname();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();

};

void	Contact::add_contact(){
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

void	Contact::display(){
		std::cout << &firstName << std::endl;
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


#endif
