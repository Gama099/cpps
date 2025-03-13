#include "PhoneBook.hpp"

void	set_phone_book( std::string cmd );

int	main(int ac, char **av)
{
	while (1){
		std::string cmd;
		PhoneBook log;

		std::cout << "welome to the phone book";
		//TODO draw a phonebook
		std::cout << " available choises ADD SEARCH EXIT" << std::endl;
		std::getline(std::cin, cmd);
		// if (!cmd.compare("ADD") || !cmd.compare("SEARCH") || !cmd.compare("EXIT")){
		if (!cmd.compare("ADD")){
			log.addContact();
		}
		else if (!cmd.compare("SEARCH")){
			log.displayConatact();
		}
		else if (!cmd.compare("EXIT"))
			exit(EXIT_SUCCESS);
	}
}
