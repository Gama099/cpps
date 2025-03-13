#ifndef PHONEBOOH_HPP
#define PHONEBOOH_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact Contacts[8];
		int		index;
	public:
		void	addContact(){
			index = index % 8;
			Contacts[index].add_contact();
			index++;
			std::cout << index << std::endl;
		}
		PhoneBook(){
			index = 0;
		}
		void	displayConatact(){
			for (int i = 0 ; i < 8; i++){
				std::cout << index << std::endl;
				Contacts[i].display();
			}
		}
};

#endif
