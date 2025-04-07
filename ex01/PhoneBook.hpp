#ifndef PHONEBOOH_HPP
#define PHONEBOOH_HPP

#define CONTACT_NUM 2

#include <cstdlib>
#include <cctype>   // For isdigit
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[CONTACT_NUM];
	std::string	column( std::string name );
public:
	void	addContact(int index);
	void	displayContact(int index);
	// void disply(void)
	// {
	// 	for (size_t idx = 0; idx < 8; idx++)
	// 	{
	// 		std::cout << contacts[idx].getFirstName() << std::endl;
	// 		std::cout << contacts[idx].getLastname() << std::endl;
	// 		std::cout << contacts[idx].getNickname() << std::endl;
	// 		std::cout << contacts[idx].getPhoneNumber() << std::endl;
	// 		std::cout << contacts[idx].getDarkestSecret() << std::endl;
	// 	}
	// }
};

#endif
