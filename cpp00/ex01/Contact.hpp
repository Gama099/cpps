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

#endif
