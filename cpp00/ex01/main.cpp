#include "PhoneBook.hpp"

void	set_phone_book( std::string cmd );

int	main()
{
	std::string	cmd;
	PhoneBook	log;
	int 		index = 0;
	while (1){

		std::cout << "welome to the phone book";
		//TODO draw a phonebook
		std::cout << " available choises ADD SEARCH EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD")){
			log.addContact(index);
			index++;
			log.disply();
		}
		else if (!cmd.compare("SEARCH")){
			log.displayContact(index);
		}
		else if (!cmd.compare("EXIT"))
			exit(EXIT_SUCCESS);
	}
}

