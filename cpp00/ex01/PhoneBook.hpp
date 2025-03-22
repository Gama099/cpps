#ifndef PHONEBOOH_HPP
#define PHONEBOOH_HPP

#include <cstdlib>
#include <cctype>   // For isdigit
#include "Contact.hpp"

// class PhoneBook
// {
// 	private:
// 		Contact Contacts[8];
// 		int		index;
// 	public:
// 		void	addContact(){
// 			index = index % 8;
// 			Contacts[index].add_contact();
// 			index++;
// 			std::cout << index << std::endl;
// 		}
// 		PhoneBook(){
// 			index = 0;
// 		}
// 		void	displayConatact(){
// 			for (int i = 0 ; i < 8; i++){
// 				std::cout << index << std::endl;
// 				Contacts[i].display();
// 			}
// 		}
// };

class PhoneBook
{
private:
	Contact contacts[8];
public:
	// PhoneBook();
	// ~PhoneBook();
	void	addContact(int index);
	void	displayContact(int index);


	void disply(void)
	{
		for (size_t idx = 0; idx < 8; idx++)
		{
			std::cout << contacts[idx].getFirstName() << std::endl;
			std::cout << contacts[idx].getLastname() << std::endl;
			std::cout << contacts[idx].getNickname() << std::endl;
			std::cout << contacts[idx].getPhoneNumber() << std::endl;
			std::cout << contacts[idx].getDarkestSecret() << std::endl;
		}
	}
};

#endif
