#include "PhoneBook.hpp"

// void	set_phone_book( std::string cmd );

void welcome_to_phonebook() {
    std::cout << std::endl;
    std::cout << "***************************************" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*      WELCOME TO THE PHONEBOOK       *" << std::endl;
    std::cout << "*   Where your contacts come to life  *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "***************************************" << std::endl;
    std::cout << std::endl;
}

int	main()
{
	std::string	cmd;
	PhoneBook	log;
	int 		index = 0;
	welcome_to_phonebook();
	while (1){
		std::cout << "****************************************" << std::endl;
		std::cout << "*     Please choose an option:         *" << std::endl;
		std::cout << "*          ADD                         *" << std::endl;
		std::cout << "*          SEARCH                      *" << std::endl;
		std::cout << "*          EXIT                        *" << std::endl;
		std::cout << "****************************************" << std::endl;
		std::cout << std::endl;

		if(!std::getline(std::cin, cmd))
			return 1;
		if (!cmd.compare("ADD")){
			log.addContact(index);
			index++;
		}
		else if (!cmd.compare("SEARCH")){
			if (index)
				log.displayContact(index - 1);
			else
				std::cout << "empty phonebook" << std::endl;
		}
		else if (!cmd.compare("EXIT"))
			exit(EXIT_SUCCESS);
		else
			continue;
	}
}
