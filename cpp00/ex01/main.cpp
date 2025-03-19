#include "PhoneBook.hpp"

void	set_phone_book( std::string cmd );

int	main()
{
	while (1){
		std::string	cmd;
		PhoneBook	log;

		std::cout << "welome to the phone book";
		//TODO draw a phonebook
		std::cout << " available choises ADD SEARCH EXIT" << std::endl;
		std::getline(std::cin, cmd);
		// if (!cmd.compare("ADD") || !cmd.compare("SEARCH") || !cmd.compare("EXIT")){
		if (!cmd.compare("ADD")){
			log.addContact();
		}
		else if (!cmd.compare("SEARCH")){
			log.displayContact();
		}
		else if (!cmd.compare("EXIT"))
			exit(EXIT_SUCCESS);
	}
}

int	main()
{
	PhoneBook phones;
	
}
