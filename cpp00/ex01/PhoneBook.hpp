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
	int		index;
public:
	PhoneBook();
	// ~PhoneBook();
	void	addContact(void);
	void	displayContact(void);
};

PhoneBook::PhoneBook() : index(0) {};

void	PhoneBook::addContact(){
	contacts[index % 8].add_contact();
	index++;
}

void	PhoneBook::displayContact(){
	std::string cmd;
	int idx;
	for (int  i = 0;(i <= index && i < 8); i++){
		std::cout << "|" << index
		<< "|" << contacts[index].getFirstName()
		<< "|" << contacts[index].getLastname()
		<< "|" << contacts[index].getNickname()
		<< "|" << std::endl;
	}
	std::cout << "entre index to display" << std::endl;
	std::getline(std::cin, cmd);
	for(int i = 0; i < (int)cmd.length(); i++){
		if (!std::isdigit(cmd[i])){
			std::cout << "please entre valid index!!" <<std::endl;
			break;
		}
	}
	idx = atoi(cmd.c_str());
	if (idx > 7 || idx < 0)
		std::cout << "please entre valid index!!" <<std::endl;
	//find somthing to check if is number
	std::cout << contacts[idx].getFirstName() << std::endl;
	std::cout << contacts[idx].getLastname() << std::endl;
	std::cout << contacts[idx].getNickname() << std::endl;
	std::cout << contacts[idx].getPhoneNumber() << std::endl;
	std::cout << contacts[idx].getDarkestSecret() << std::endl;
}


bool is_valid_integer(const std::string& str) {
    if (str.empty()) return false;
    for (size_t i = 0; i < str.length(); ++i) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

#endif
