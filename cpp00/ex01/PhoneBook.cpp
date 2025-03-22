#include "PhoneBook.hpp"


void	PhoneBook::addContact(int index){
	contacts[index % 8].add_contact();
	index++;
}

void	PhoneBook::displayContact(int index){
	std::string cmd;
	int idx;

	for (int  i = 0;(i <= index && i < 8); i++){
		std::cout << "|" << i
		<< "|" << contacts[i].getFirstName()
		<< "|" << contacts[i].getLastname()
		<< "|" << contacts[i].getNickname()
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
	else {
		std::cout << contacts[idx].getFirstName() << std::endl;
		std::cout << contacts[idx].getLastname() << std::endl;
		std::cout << contacts[idx].getNickname() << std::endl;
		std::cout << contacts[idx].getPhoneNumber() << std::endl;
		std::cout << contacts[idx].getDarkestSecret() << std::endl;
	}
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

