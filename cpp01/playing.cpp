#include <iostream>
#include <string>

class Myclass{
	public:
		void display(){
			std::cout << "Hello world!!" << std::endl;
		}
		int add(int x){
			x += 10;
			std::cout << x << std::endl;
			return (x);
		}
};

class Harl {
	public:
		void debug() {
			std::cout << "Debug message" << std::endl;
		}
		void info() {
			std::cout << "Info message" << std::endl;
		}
	};

int main()
{
	Harl obj;
	void (Harl::*ptr1)();
	void (Harl::*ptr2)();

	ptr1 = &Harl::debug;
	ptr2 = &Harl::info;

	(obj.*ptr1)();
	(obj.*ptr2)();

	void (Harl::*ptrs[4])();
	(obj.*ptrs[0])() = &Harl::debug;
	(obj.*ptrs[1])() = &Harl::info;

	// void (Myclass::*ptr)();
	// ptr = &Myclass::display;
	// Myclass obj;
	// (obj.*ptr)();
	// int (Myclass::*ptrr)(int);
	// ptrr = &Myclass::add;
	// (obj.*ptrr)(5);


}
