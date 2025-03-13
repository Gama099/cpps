#include "Weapon.hpp"

Weapon::Weapon(std::string type_init){
	type = type_init;
}

const std::string& Weapon::getType(){
	return type;
}

void Weapon::setType(std::string type_init) {
	type = type_init;
}

