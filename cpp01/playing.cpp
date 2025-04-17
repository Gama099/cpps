// #include <iostream>
// #include <string>

// using namespace std ;

// class Myclass{
// 	public:
// 		void display(){
// 			std::cout << "Hello world!!" << std::endl;
// 		}
// 		int add(int x){
// 			x += 10;
// 			std::cout << x << std::endl;
// 			return (x);
// 		}
// };

// class Harl {
// 	public:
// 		void debug() {
// 			std::cout << "Debug message" << std::endl;
// 		}
// 		void info() {
// 			std::cout << "Info message" << std::endl;
// 		}
// 		void fun(int &ref) {
// 			ref++;
// 		}
// 	};



// int main()
// {
// 	// std::string line;
// 	// line.append(".xn");
// 	// std::cout << line;
// 	// Harl obj;
// 	// void (Harl::*ptr1)();
// 	// void (Harl::*ptr2)();

// 	// ptr1 = &Harl::debug;
// 	// ptr2 = &Harl::info;

// 	// (obj.*ptr1)();
// 	// (obj.*ptr2)();

// 	// void (Harl::*ptrs[4])();
// 	// (obj.*ptrs[0])() = &Harl::debug;
// 	// (obj.*ptrs[1])() = &Harl::info;

// 	// void (Myclass::*ptr)();
// 	// ptr = &Myclass::display;
// 	// Myclass obj;
// 	// (obj.*ptr)();
// 	// int (Myclass::*ptrr)(int);
// 	// ptrr = &Myclass::add;
// 	// (obj.*ptrr)(5);
// 	int y = 10;

// 	// Harl obj;
// 	Harl obj;
// 	void (Harl::*ptr)();
// 	// ptr = &Harl::debug;
// 	// (obj.*ptr)();
// 	void (Harl::*ptr1)(int&);
// 	ptr1 = &Harl::fun;
// 	(obj.*ptr1)(y);

// 	void (Harl::*ptrs[])() = {&Harl::debug, &Harl::info, &Harl::debug};
// 	// for (size_t i = 0; i < 4; i++)
// 	// {
// 	// 	ptrs[i] = &Harl::info;
// 	// }
// 	for (size_t i = 0; i < 3; i++)
// 	{
// 		(obj.*ptrs[i])();
// 	}


// }

#include <iostream>
#include <string>

class Weapon{
	private:
	std::string type;

	public:
	std::string &getType(){
		return type;
	}
	void setType(std::string type){
		this->type = type;
	}
	Weapon(std::string type) : type(type) {};


};



class HumanA{
	private:
	std::string name;
	Weapon 		&weapon;
	public:
	void attack(){
		std::cout << name << " attacks with their" << weapon.getType() << std::endl;
	}
	HumanA(std::string name, Weapon &weapn): name(name), weapon(weapn){}


};

class HumanB{
	private:
	Weapon 		*weapon;
	std::string name;
	public:
		void attack(){
			if (weapon != nullptr)
				std::cout << name << " attacks with their" << weapon->getType() << std::endl;
		}
		HumanB(std::string name) : name(name) , weapon(nullptr){}
		void setWeapon(Weapon &weapo){
			this->weapon = &weapo;
		}

};

int main()
{
	{

		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}

	{

		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

return 0;
}
