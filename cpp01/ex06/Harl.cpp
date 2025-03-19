#include "Harl.hpp"

void Harl::debug(){
	std::cout << "debug" << std::endl;
}

void Harl::info(){
	std::cout << "info" << std::endl;
}

void Harl::warning(){
	std::cout << "warning" << std::endl;
}

void Harl::error(){
	std::cout << "errors" << std::endl;
}

void Harl::complain(std::string level)
{
	// create array of points to function members and assign them
	void (Harl::*pointer[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++){
		if (level == levels[i]){
			for (int j = i; j < 4; j++){
				(this->*pointer[j])();
			}
			return ;
		}
	}
	std::cout << "nothing" << std::endl;
}
